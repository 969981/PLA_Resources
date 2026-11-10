/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0071e9e0; name: thunk_FUN_007257b4
 */


void thunk_FUN_007257b4(long *param_1)

{
  long lVar1;
  
  FUN_00725814();
  if ((*param_1 != 0) || (lVar1 = param_1[2], lVar1 == 0)) {
    return;
  }
  if (*(long *)(lVar1 + 0x20) != 0) {
    FUN_00725db0(lVar1);
    if (*(long *)(lVar1 + 0x28) == 0) {
      FUN_002ee710(*(undefined8 *)(lVar1 + 0x20));
    }
  }
  FUN_002e2ea0(PTR_LAB_04373088,lVar1);
  return;
}


