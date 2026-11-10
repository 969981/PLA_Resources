/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00466440; name: FUN_00466440
 */


undefined8 FUN_00466440(int param_1,long *param_2)

{
  long lVar1;
  
  if (((*param_2 != 0) && (param_1 == 5)) && (lVar1 = *(long *)(*param_2 + 0x30), lVar1 != 0)) {
    FUN_00406ef0(lVar1,&LAB_004663a0);
  }
  return 1;
}


