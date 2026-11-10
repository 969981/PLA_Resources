/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f1a590; name: FUN_02f1a590
 */


void FUN_02f1a590(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,uint param_7,long *param_8)

{
  uint uVar1;
  char cVar2;
  undefined2 uVar3;
  bool bVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_80 [8];
  undefined1 *local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  local_78 = (undefined1 *)0x0;
  local_70 = 0x2b00000000;
  local_68 = 0;
  uVar6 = *(uint *)(param_8 + 0xe);
  iVar7 = (param_7 & 0xffff) * (uVar6 & 0xff) * 4;
  uVar1 = iVar7 + 0x10;
  uVar3 = (undefined2)param_7;
  if (uVar1 < 0x8001) {
    puVar5 = auStack_80 + -((ulong)(iVar7 + 0x1f) & 0xffffff0);
LAB_02f1a60c:
    local_68 = CONCAT22(uVar3,uVar3);
    local_70 = CONCAT44(local_70._4_4_,uVar6);
    local_78 = puVar5;
    if (*param_8 == 0) {
      if (param_8[5] != 0) {
        FUN_02f22f50(param_2,&local_78,param_8 + 0xc);
      }
    }
    else {
      FUN_02f226c0(param_2,&local_78,param_8 + 10,param_8);
      if (param_8[5] != 0) {
        FUN_02f21ea0(&local_78,param_8 + 0xc);
      }
    }
    FUN_02f1ba60(param_1,&local_78,param_3,param_4,param_5,param_6,param_7);
    bVar4 = true;
  }
  else {
    puVar5 = (undefined1 *)FUN_02f59e40(5,uVar1,0x10);
    if (puVar5 != (undefined1 *)0x0) {
      uVar6 = *(uint *)(param_8 + 0xe);
      goto LAB_02f1a60c;
    }
    FUN_02f1ba60(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    bVar4 = false;
  }
  *(undefined2 *)(param_3 + 0x12) = uVar3;
  if ((*(char *)((long)param_8 + 0x5d) == '\0') && (DAT_042ab26c <= *(ushort *)(param_8 + 0xb))) {
    uVar6 = (int)*(char *)((long)param_8 + 0x5a) - 1;
    *(float *)(param_8 + 10) = *(float *)((long)param_8 + 0x54);
    if (*(char *)((long)param_8 + 0x5a) < 1) {
      if (*(float *)((long)param_8 + 0x54) <= 0.1) {
        *(undefined1 *)((long)param_8 + 0x5a) = 4;
        cVar2 = *(char *)((long)param_8 + 0x6d);
        goto joined_r0x02f1a764;
      }
    }
    else {
      *(char *)((long)param_8 + 0x5a) = (char)uVar6;
      if ((uVar6 & 0xff) == 0) {
        *(undefined2 *)((long)param_8 + 0x5d) = 1;
        cVar2 = *(char *)((long)param_8 + 0x6d);
        goto joined_r0x02f1a764;
      }
    }
  }
  cVar2 = *(char *)((long)param_8 + 0x6d);
joined_r0x02f1a764:
  if ((cVar2 == '\0') && (DAT_042ab26c <= *(ushort *)(param_8 + 0xd))) {
    uVar6 = (int)*(char *)((long)param_8 + 0x6a) - 1;
    *(float *)(param_8 + 0xc) = *(float *)((long)param_8 + 100);
    if (*(char *)((long)param_8 + 0x6a) < 1) {
      if (*(float *)((long)param_8 + 100) <= 0.1) {
        *(undefined1 *)((long)param_8 + 0x6a) = 4;
      }
    }
    else {
      *(char *)((long)param_8 + 0x6a) = (char)uVar6;
      if ((uVar6 & 0xff) == 0) {
        *(undefined2 *)((long)param_8 + 0x6d) = 1;
      }
    }
  }
  if (0x8000 < uVar1 && bVar4) {
    FUN_02f59e70(5,puVar5);
  }
  return;
}


