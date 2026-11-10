/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0065f0cc; name: FUN_0065f0cc
 */


void FUN_0065f0cc(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (*(char *)(lVar2 + 0x50) == '\0') {
    *(undefined1 *)(lVar2 + 0x50) = 1;
    plVar1 = *(long **)(*(long *)(lVar2 + 0x30) + 0x20);
                    /* try { // try from 0065f0f4 to 0065f0fb has its CatchHandler @ 0065f104 */
    (**(code **)(*plVar1 + 0x38))(plVar1,0);
  }
  return;
}


