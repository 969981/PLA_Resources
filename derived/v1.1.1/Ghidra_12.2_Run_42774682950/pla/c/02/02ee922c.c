/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee922c; name: FUN_02ee922c
 */


undefined8
FUN_02ee922c(long param_1,undefined4 param_2,int param_3,undefined4 param_4,ulong param_5,
            undefined4 param_6,undefined4 param_7,undefined8 param_8,undefined4 param_9)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined1 local_60;
  undefined8 local_58;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)(*DAT_0442d138)(2,0x28);
    if (puVar2 == (undefined8 *)0x0) goto LAB_02ee93b8;
    *(undefined1 *)(puVar2 + 4) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = 0;
    puVar2[1] = 0xffffffffffffffff;
    *(undefined8 **)(param_1 + 8) = puVar2;
  }
  if (DAT_0440a160 == 0) {
    return 2;
  }
  local_80 = 0;
  local_70 = 0;
  local_78 = 0;
  local_68 = 0xff;
  local_60 = 0xff;
  local_58 = 0;
  if (puVar2 == (undefined8 *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)(puVar2 + 3) != 0;
  }
  uVar3 = FUN_02edff20(DAT_0440a160,param_1,param_2,param_3,param_4,param_5 & 0xffffffff,param_6,
                       param_7,param_8,param_9,&local_80,2,bVar1);
  if ((int)uVar3 != 1) {
    return uVar3;
  }
  puVar4 = *(ulong **)(param_1 + 8);
  if (puVar4 == (ulong *)0x0) {
    puVar4 = (ulong *)(*DAT_0442d138)(2,0x28);
    if (puVar4 == (ulong *)0x0) {
LAB_02ee93b8:
      *(undefined8 *)(param_1 + 8) = 0;
      return 2;
    }
    *(undefined1 *)(puVar4 + 4) = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = 0;
    puVar4[1] = 0xffffffffffffffff;
    *(ulong **)(param_1 + 8) = puVar4;
  }
  uVar6 = 1L << (param_5 & 0x3f);
  if ((*puVar4 & uVar6) == 0) {
    *puVar4 = *puVar4 | uVar6;
    FUN_02ee89dc();
    lVar5 = *(long *)(param_1 + 8);
    *(undefined8 *)(lVar5 + 8) = 0xffffffffffffffff;
    if (*(uint *)(lVar5 + 0x18) != 0) {
      lVar7 = (ulong)*(uint *)(lVar5 + 0x18) << 4;
      uVar6 = 0xffffffffffffffff;
      puVar4 = *(ulong **)(lVar5 + 0x10);
      do {
        uVar6 = *puVar4 & uVar6;
        lVar7 = lVar7 + -0x10;
        *(ulong *)(lVar5 + 8) = uVar6;
        puVar4 = puVar4 + 2;
      } while (lVar7 != 0);
    }
  }
  if (param_3 == 2) {
    *(undefined1 *)(*(long *)(param_1 + 8) + 0x20) = 1;
    return 1;
  }
  return 1;
}


