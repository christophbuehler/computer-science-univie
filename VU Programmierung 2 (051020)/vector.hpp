#include "stdio.h"

class Vector {
  static constexpr size_t min_sz = 5;

  private:
    size_t sz;      // Enthaelt die Anzahl der Elemente im Vector.
    size_t max_sz;  // Enthaelt die maximale Anzahl an Elementen die moeglich sind.
    double* values; // Zeigt auf ein Feld, welches die Elemente des Vectors beinhaltet.

  public:
    Vector();
    Vector(size_t n);
    Vector(Vector vector);
    ~Vector();

    size_t size() const;        // Retourniert Anzahl der gespeicherten Elemente.
    bool empty() const;         // Retourniert true falls der Vector leer ist, ansonsten false.
    void clear();               // Loescht alle Elemente aus dem Vector.
    void reserve(size_t n);     // Kapazitaet des Vectors wird auf n vergroessert, falls noetig.
    void shrink_to_fit();       // Kapazitaet wird auf Anzahl der Elemente reduziert.
    void push_back(double x);   // Fuegt eine Kopie von x am Ende des Vectors hinzu.
    void pop_back();            // Entfernt das letzte Element im Vector. Wirft eine Exception, falls der Vector leer war.

    /*
    experimental ostream joiner?
    ostream& operator<<(ostream&, const Vector&) Ausgabe in der
    Form: [Element1, Element2, Element3].
    Beispiel Vector x({1,2,3,4}) → [1, 2, 3, 4]
    */
}

Vector::Vector() {}
Vector::Vector(size_t n): { max_sz = n };
Vector::Vector(Vector vector) {
  return vector;
}
Vector::~Vector() {}
Vector::size() {
  return this->sz;
}
Vector::clear() {
  this->values = NULL;
  this->sz = 0;
}
Vector::reserve(size_t n) {
  if (this->max_sz > n) return;
  this->max_sz = n;
}
Vector::shrink_to_fit() {
  this->max_sz = this.sz;
}
Vector::push_back(double x) {
  this->values + this->sz = x;
  ++this->sz;
}
Vector::pop_back() {
  if (this->sz == 0) throw "Cannot pop_back from an empty vector.";
  --this->sz;
  this->values + this->sz = NULL;
}

std::initializer_list<double>() {
  return new Vector();
}
