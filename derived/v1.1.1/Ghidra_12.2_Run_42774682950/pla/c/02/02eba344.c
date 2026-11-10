/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eba344; name: FUN_02eba344
 */


undefined8 FUN_02eba344(long param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  char cVar12;
  undefined4 uVar13;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined1 local_88;
  undefined4 local_87;
  undefined3 uStack_83;
  char local_80;
  undefined4 local_7f;
  undefined3 uStack_7b;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined3 uStack_6c;
  undefined4 uStack_68;
  undefined3 uStack_64;
  
  iVar4 = FUN_02eb9c74();
  uVar11 = *param_2;
  uVar13 = *(undefined4 *)(param_2 + 1);
  uVar2 = *(undefined4 *)((long)param_2 + 0xc);
  uVar9 = *(undefined4 *)(param_2 + 2);
  uVar3 = *(undefined4 *)((long)param_2 + 0x14);
  uVar10 = *(undefined1 *)(param_2 + 3);
  local_87 = *(undefined4 *)((long)param_2 + 0x19);
  uStack_64 = (undefined3)((uint)*(undefined4 *)((long)param_2 + 0x1c) >> 8);
  local_7f = *(undefined4 *)((long)param_2 + 0x21);
  cVar12 = *(char *)(param_2 + 4);
  uStack_6c = (undefined3)((uint)*(undefined4 *)((long)param_2 + 0x24) >> 8);
  if (iVar4 < 1) {
    uVar8 = param_2[5];
  }
  else {
    if (cVar12 != -1) {
      uVar13 = 0;
    }
    if (iVar4 == 1) {
      uVar8 = 0;
    }
    else {
      uVar9 = 0;
      uVar8 = 0;
      uVar13 = 0;
      if (iVar4 != 2) {
        uVar11 = 0;
      }
      uVar10 = 0xff;
      cVar12 = -1;
    }
  }
  uStack_83 = uStack_64;
  uStack_7b = uStack_6c;
  local_a0 = uVar11;
  local_98 = uVar13;
  uStack_94 = uVar2;
  local_90 = uVar9;
  uStack_8c = uVar3;
  local_88 = uVar10;
  local_80 = cVar12;
  local_78 = uVar8;
  uStack_70 = local_7f;
  uStack_68 = local_87;
  plVar5 = (long *)FUN_02ebbbf8(param_1 + 0x38,&local_a0);
  uVar6 = 0;
  if (plVar5 != (long *)0x0) {
    lVar7 = *plVar5;
    if (lVar7 == 0) {
      uVar6 = 0;
    }
    else {
      *(undefined4 *)(param_2 + 1) = uVar13;
      *(undefined4 *)((long)param_2 + 0xc) = uVar2;
      *(undefined4 *)(param_2 + 2) = uVar9;
      *(undefined4 *)((long)param_2 + 0x14) = uVar3;
      uVar6 = 1;
      *(undefined1 *)(param_2 + 3) = uVar10;
      *param_2 = uVar11;
      *(uint *)((long)param_2 + 0x1c) = CONCAT31(uStack_64,uStack_68._3_1_);
      *(undefined4 *)((long)param_2 + 0x19) = uStack_68;
      *(char *)(param_2 + 4) = cVar12;
      *(uint *)((long)param_2 + 0x24) = CONCAT31(uStack_6c,uStack_70._3_1_);
      *(undefined4 *)((long)param_2 + 0x21) = uStack_70;
      param_2[5] = uVar8;
      puVar1 = (undefined4 *)(lVar7 + 0x80);
      if (*(long *)(lVar7 + 0x60) != 0) {
        puVar1 = (undefined4 *)(*(long *)(lVar7 + 0x60) + 0xc);
      }
      *param_3 = *puVar1;
    }
  }
  return uVar6;
}


