/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033a2630; name: _longjmp
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _longjmp(__jmp_buf_tag *__env,int __val)

{
  (*(code *)PTR__longjmp_043709e0)(__env,__val);
  return;
}


