/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00245804; name: FUN_00245804
 */


void FUN_00245804(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 local_28;
  undefined4 local_24;
  
  if (param_4 == 0) {
    if (param_5 == 0) {
      iVar1 = *(int *)(param_1 + 0x220);
      goto LAB_00245898;
    }
    uVar6 = 0x48535244;
    local_28 = 8;
    lVar3 = FUN_00235844(param_3,param_2,0x48535244,1,&local_28);
    *(long *)(param_1 + 0x218) = lVar3;
    uVar4 = *(undefined8 *)(lVar3 + 0x38);
    puVar5 = &local_28;
  }
  else {
    uVar6 = 0x4b53414d;
    local_24 = 1;
    lVar3 = FUN_00235844(param_3,param_2,0x4b53414d,1,&local_24);
    *(long *)(param_1 + 0x218) = lVar3;
    uVar4 = *(undefined8 *)(lVar3 + 0x38);
    puVar5 = &local_24;
  }
  iVar1 = FUN_002506a0(uVar4,uVar6,1,puVar5);
  *(int *)(param_1 + 0x220) = iVar1;
LAB_00245898:
  lVar3 = *(long *)(*(long *)(param_1 + 0x218) + 0x30);
  iVar2 = FUN_00230144();
  *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(lVar3 + (long)(iVar2 * iVar1) * 4);
  return;
}


