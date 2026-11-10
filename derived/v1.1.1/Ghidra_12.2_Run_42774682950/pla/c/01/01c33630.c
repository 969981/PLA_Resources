/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c33630; name: ~Mutex
 */


/* nn::os::Mutex::~Mutex() */

void __thiscall nn::os::Mutex::~Mutex(Mutex *this)

{
  (*(code *)PTR_FinalizeMutex_04370f38)();
  return;
}


