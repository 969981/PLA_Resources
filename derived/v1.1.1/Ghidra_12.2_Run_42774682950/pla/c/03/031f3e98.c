/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f3e98; name: FUN_031f3e98
 */


void FUN_031f3e98(long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined1 *local_68;
  undefined8 local_60;
  undefined1 auStack_58 [16];
  long local_48;
  undefined8 local_38;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x478) + 0x28);
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x478) + 0x20);
  local_68 = auStack_58;
  local_60 = -0x7fffffff00000000;
  if (iVar1 < 2) {
    if (iVar1 == 0) goto joined_r0x031f3eec;
  }
  else {
    local_68 = (undefined1 *)FUN_031f40b0(PTR_PTR_0434a080,iVar1,local_68,0,(long)&local_60 + 4);
    if ((int)local_60 == iVar1) goto joined_r0x031f3eec;
  }
  local_60 = CONCAT44(local_60._4_4_,iVar1);
joined_r0x031f3eec:
  local_48 = 0;
  if (iVar1 != 0) {
    local_48 = 0;
    lVar6 = (long)iVar1 << 3;
    do {
      uVar7 = *puVar8;
      local_38 = uVar7;
      lVar4 = FUN_031f41c8(param_2,&local_38);
      if ((lVar4 == 0) ||
         (uVar5 = (ulong)*(uint *)(lVar4 + 4) | (lVar4 - param_2[2]) * 0x20000000, (int)uVar5 < 0))
      {
LAB_031f4064:
        lVar4 = FUN_031f3008(uVar7);
        if (lVar4 != 0) {
          FUN_032d645c();
          FUN_031f3e40(uVar7,lVar4,param_3,&local_68);
          FUN_032d647c(lVar4);
        }
      }
      else {
        lVar4 = *(long *)(*param_2 + ((long)(uVar5 << 0x20) >> 0x1c) + 8);
        cVar2 = *(char *)(lVar4 + 0x5c);
        if (cVar2 == '\x01') {
LAB_031f4044:
          FUN_031f30a0(uVar7,*(undefined8 *)(lVar4 + 0x60));
        }
        else {
          if (cVar2 == '\x04') goto LAB_031f4064;
          if (cVar2 == '\x03') goto LAB_031f4044;
        }
      }
      puVar8 = puVar8 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  FUN_031c3c14(param_4,local_68,local_68 + local_48 * 0x10);
  if (local_48 != 0) {
    lVar6 = local_48 << 4;
    plVar9 = (long *)(local_68 + 8);
    do {
      if (*plVar9 != 0) {
        FUN_032d647c();
      }
      lVar6 = lVar6 + -0x10;
      plVar9 = plVar9 + 2;
    } while (lVar6 != 0);
  }
  lVar6 = local_60;
  uVar3 = local_60._4_4_;
  local_60 = (ulong)local_60._4_4_ << 0x20;
  if ((-1 < lVar6) && (local_68 != (undefined1 *)0x0)) {
    FUN_032cf244(PTR_PTR_0434a080,local_68,0x10,uVar3 & 0x3fffffff);
  }
  return;
}


