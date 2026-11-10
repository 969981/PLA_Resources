/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d52450; name: FUN_00d52450
 */


void FUN_00d52450(long *param_1,int param_2)

{
  float *pfVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  lVar2 = (**(code **)(*param_1 + 0xa8))();
  if (lVar2 != 0) {
    fVar5 = 0.0;
    fVar6 = 0.0;
    lVar3 = lVar2;
    do {
      pfVar1 = (float *)(lVar3 + 0x30);
      fVar6 = fVar6 + *(float *)(lVar3 + 0x34);
      lVar3 = *(long *)(lVar3 + 0x18);
      fVar5 = fVar5 + *pfVar1;
    } while (lVar3 != 0);
    *(float *)(param_1 + (long)param_2 * 0xc + 0xc9) = fVar5;
    lVar4 = (long)param_2;
    *(float *)((long)param_1 + (long)param_2 * 0x60 + 0x64c) = fVar6;
    lVar3 = FUN_002443dc(lVar2,"InventorySpaceX");
    if ((lVar3 != 0) && (*(char *)(lVar3 + 10) == '\x01')) {
      *(float *)(param_1 + lVar4 * 0xc + 0xca) =
           (float)*(int *)(lVar3 + (ulong)*(uint *)(lVar3 + 4));
    }
    lVar3 = FUN_002443dc(lVar2,"InventorySpaceY");
    if ((lVar3 != 0) && (*(char *)(lVar3 + 10) == '\x01')) {
      *(float *)((long)param_1 + lVar4 * 0x60 + 0x654) =
           (float)*(int *)(lVar3 + (ulong)*(uint *)(lVar3 + 4));
    }
    lVar3 = FUN_002443dc(lVar2,"InventoryNumberX");
    if ((lVar3 != 0) && (*(char *)(lVar3 + 10) == '\x01')) {
      *(undefined4 *)(param_1 + lVar4 * 0xc + 200) =
           *(undefined4 *)(lVar3 + (ulong)*(uint *)(lVar3 + 4));
    }
    lVar2 = FUN_002443dc(lVar2,"InventoryNumberY");
    if ((lVar2 != 0) && (*(char *)(lVar2 + 10) == '\x01')) {
      *(undefined4 *)((long)param_1 + lVar4 * 0x60 + 0x644) =
           *(undefined4 *)(lVar2 + (ulong)*(uint *)(lVar2 + 4));
    }
  }
  return;
}


