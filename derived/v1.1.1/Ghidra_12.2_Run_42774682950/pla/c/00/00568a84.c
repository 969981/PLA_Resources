/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00568a84; name: FUN_00568a84
 */


void FUN_00568a84(logic_error *param_1)

{
  std::logic_error::logic_error
            (param_1,"allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
  *(undefined **)param_1 = PTR_vtable_04374d30 + 0x10;
  return;
}


