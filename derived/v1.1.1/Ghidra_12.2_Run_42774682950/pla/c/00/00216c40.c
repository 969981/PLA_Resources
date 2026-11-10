/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00216c40; name: FUN_00216c40
 */


undefined8 FUN_00216c40(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  
  if ((((param_1 != 0) && (*(long *)(param_1 + 0x40) != 0)) && (*(long *)(param_1 + 0x48) != 0)) &&
     ((plVar5 = *(long **)(param_1 + 0x38), plVar5 != (long *)0x0 && (*plVar5 == param_1)))) {
    iVar3 = (int)plVar5[1];
    if (((iVar3 - 0x39U < 0x39) &&
        ((1L << ((ulong)(iVar3 - 0x39U) & 0x3f) & 0x100400400011001U) != 0)) ||
       ((iVar3 == 0x29a || (iVar3 == 0x2a)))) {
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x58) = 2;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      plVar5[4] = plVar5[2];
      plVar5[5] = 0;
      iVar3 = (int)plVar5[6];
      if (iVar3 < 0) {
        iVar3 = -iVar3;
        *(int *)(plVar5 + 6) = iVar3;
      }
      uVar4 = 0x71;
      if (iVar3 != 0) {
        uVar4 = 0x2a;
      }
      uVar1 = 0x39;
      if (iVar3 != 2) {
        uVar1 = uVar4;
      }
      *(undefined4 *)(plVar5 + 1) = uVar1;
      if (iVar3 != 2) {
        uVar2 = FUN_00215360(0,0,0);
      }
      else {
        uVar2 = FUN_00215640();
      }
      *(undefined8 *)(param_1 + 0x60) = uVar2;
      *(undefined4 *)((long)plVar5 + 0x4c) = 0;
      FUN_00219be0(plVar5);
      return 0;
    }
  }
  return 0xfffffffe;
}


