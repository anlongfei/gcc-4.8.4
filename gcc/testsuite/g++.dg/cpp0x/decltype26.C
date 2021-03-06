// { dg-options -std=c++0x }

struct A { };

template <class T>
decltype(f(T())) f(T t)		// { dg-error "depth" }
{
  return f(t);
}

int main()
{
  f(A());			// { dg-error "no match" }
}

// { dg-prune-output "note" }
