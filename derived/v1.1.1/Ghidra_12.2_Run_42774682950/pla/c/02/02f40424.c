/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f40424; name: FUN_02f40424
 */


undefined8 FUN_02f40424(float param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((*(byte *)(param_2 + 0x6c) >> 1 & 1) == 0) {
LAB_02f4043c:
    uVar1 = 2;
  }
  else {
    FUN_02f40810(param_2 + 0x20);
    param_1 = *(float *)(param_2 + 0x58) * param_1;
    *(undefined4 *)(param_2 + 0x5c) = 0;
    *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_2 + 0x40);
    *(float *)(param_2 + 0x68) = param_1 - (float)(int)param_1;
    *(int *)(param_2 + 100) = (int)param_1;
    lVar2 = *(long *)(param_2 + 0x38);
    while( true ) {
      if ((lVar2 == 0) && ((*(byte *)(param_2 + 0x6c) >> 2 & 1) == 0)) goto LAB_02f4043c;
      if (*(uint *)(param_2 + 100) <= *(uint *)(param_2 + 0x60)) break;
      FUN_02f404bc(param_2);
      lVar2 = *(long *)(param_2 + 0x38);
    }
    uVar1 = 1;
  }
  return uVar1;
}


