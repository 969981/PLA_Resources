/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bac564; name: FUN_02bac564
 */


void FUN_02bac564(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  char *pcVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  long local_4a0;
  long local_498;
  
  lVar12 = *(long *)(param_1 + 0x80);
  for (lVar9 = *(long *)(param_1 + 0x78); lVar9 != lVar12; lVar9 = lVar9 + 0x18) {
    FUN_02bc05e4(*(undefined8 *)(lVar9 + 8),0);
  }
  lVar12 = *(long *)(param_1 + 0xb8);
  for (lVar9 = *(long *)(param_1 + 0xb0); lVar9 != lVar12; lVar9 = lVar9 + 0x18) {
    FUN_02bc05e4(*(undefined8 *)(lVar9 + 8),0);
  }
  if (*(long *)(param_1 + 0x210) != 0) {
    FUN_02ba457c();
  }
  lVar9 = *(long *)(param_1 + 0x238);
  lVar12 = *(long *)(param_1 + 0x240) - lVar9;
  if (lVar12 == 0x30) {
    uVar10 = (uint)param_3 & 1;
  }
  else {
    uVar14 = (lVar12 >> 3) * -0x5555555555555555;
    iVar1 = 0;
    if (uVar14 != 0) {
      iVar1 = (int)(param_3 / uVar14);
    }
    uVar10 = (uint)param_3 - iVar1 * (int)uVar14;
  }
  *(uint *)(param_1 + 0x270) = uVar10;
  if (*(char *)(lVar9 + (ulong)uVar10 * 0x18) == '\0') {
    local_4a8 = *(undefined8 *)(param_2 + 8);
    local_4a0 = *(long *)(param_2 + 0x6098);
    local_498 = param_2 + 0x10;
    auVar15 = FUN_02b9e938(*(undefined8 *)(param_2 + 0x6100),&local_4a8);
    *(undefined1 (*) [16])(*(long *)(param_1 + 0x238) + (ulong)*(uint *)(param_1 + 0x270) * 0x18) =
         auVar15;
    uVar10 = *(uint *)(param_1 + 0x270);
    lVar9 = *(long *)(param_1 + 0x238);
    *(long *)(param_1 + 0x230) = param_2;
  }
  if ((*(char *)(lVar9 + (ulong)uVar10 * 0x18 + 0x10) != '\0') || (*(long *)(param_1 + 0x280) != 0))
  {
    FUN_02bb814c(param_1,param_2);
    FUN_02b9cc04(&local_4a8,param_2);
    if (*(char *)(*(long *)(param_1 + 0x238) + (ulong)*(uint *)(param_1 + 0x270) * 0x18) != '\0') {
      lVar9 = *(long *)(*(long *)(param_1 + 0x238) + (ulong)*(uint *)(param_1 + 0x270) * 0x18 + 8);
      *(undefined8 *)(lVar9 + 0x140) = 0;
      FUN_02b9f690(lVar9);
      FUN_02b9faf0(lVar9);
      local_4a0 = lVar9;
      if (lVar9 != 0) {
        local_498 = lVar9;
        (*DAT_043f0ba0)(lVar9);
      }
    }
    if (((*(char *)(param_1 + 0x278) != '\0') && (lVar9 = *(long *)(param_1 + 0x58), lVar9 != 0)) &&
       (*(char *)(lVar9 + 0xd8) != '\0')) {
      (*DAT_043f0eb0)(local_498,*(undefined4 *)(lVar9 + 0xdc));
    }
    lVar9 = *(long *)(param_1 + 0x210);
    if (lVar9 != 0) {
      if ((*(uint *)(lVar9 + 8) | 0x10) != 0x10) {
        (*DAT_043f0e58)(local_498);
      }
      lVar12 = *(long *)(lVar9 + 0x10);
      uVar10 = *(uint *)(lVar12 + 0xa0);
      uVar14 = *(ulong *)(*(long *)(lVar12 + 0x98) + 0x138);
      uVar11 = (uint)uVar14;
      if (uVar10 < 3) {
        uVar11 = uVar11 & uVar10 - 1;
      }
      else {
        iVar1 = 0;
        if ((ulong)uVar10 != 0) {
          iVar1 = (int)(uVar14 / uVar10);
        }
        uVar11 = uVar11 - iVar1 * uVar10;
      }
      pcVar7 = (char *)FUN_02bc0470((long)(int)uVar11,lVar12 + 0x58);
      if ((*pcVar7 != '\0') && (*(long *)(pcVar7 + 8) != 0)) {
        (*DAT_043f0e50)(local_498,*(undefined4 *)(lVar9 + 8),
                        *(undefined8 *)(*(long *)(pcVar7 + 8) + 0x40));
      }
    }
    if (*(long *)(param_1 + 0x58) != 0) {
      FUN_02bb0408(*(long *)(param_1 + 0x58),param_2,&local_4a8);
    }
    FUN_02bb14cc(param_1,&local_4a8);
    puVar5 = *(undefined4 **)(param_1 + 0x160);
    for (puVar4 = *(undefined4 **)(param_1 + 0x158); puVar4 != puVar5; puVar4 = puVar4 + 4) {
      lVar9 = *(long *)(puVar4 + 2);
      if (lVar9 != 0) {
        uVar10 = *(uint *)(lVar9 + 0xa0);
        uVar2 = *puVar4;
        uVar3 = puVar4[1];
        uVar14 = *(ulong *)(*(long *)(lVar9 + 0x98) + 0x138);
        uVar11 = (uint)uVar14;
        if (uVar10 < 3) {
          uVar11 = uVar11 & uVar10 - 1;
        }
        else {
          iVar1 = 0;
          if ((ulong)uVar10 != 0) {
            iVar1 = (int)(uVar14 / uVar10);
          }
          uVar11 = uVar11 - iVar1 * uVar10;
        }
        uVar8 = FUN_02bc0470((long)(int)uVar11,lVar9 + 0x58);
        FUN_02b9d08c(&local_4a8,uVar2,uVar3,uVar8);
      }
    }
    FUN_02bb1868(param_1,&local_4a8,0);
    if (*(long *)(param_1 + 0x1b0) != 0) {
      FUN_02bb91c0(param_1,&local_4a8);
    }
    if (*(long *)(param_1 + 0x1d0) != 0) {
      FUN_02baa398(*(long *)(param_1 + 0x1d0),&local_4a8);
    }
    if (*(long *)(param_1 + 0x1f0) != 0) {
      FUN_02ba4fc0(*(long *)(param_1 + 0x1f0),&local_4a8);
    }
    if (*(code **)(param_1 + 0x280) != (code *)0x0) {
      puVar13 = (undefined8 *)
                (*(long *)(param_1 + 0x238) + (ulong)*(uint *)(param_1 + 0x270) * 0x18);
      local_4b8 = *puVar13;
      uStack_4b0 = puVar13[1];
      (**(code **)(param_1 + 0x280))(param_1 + 0x2a0,&local_4b8);
    }
    lVar9 = *(long *)(param_1 + 0x210);
    if (lVar9 != 0) {
      lVar12 = *(long *)(lVar9 + 0x10);
      iVar1 = 0;
      if (*(int *)(lVar9 + 8) != 0x10) {
        iVar1 = *(int *)(lVar9 + 8);
      }
      uVar10 = *(uint *)(lVar12 + 0xa0);
      uVar14 = *(ulong *)(*(long *)(lVar12 + 0x98) + 0x138);
      uVar11 = (uint)uVar14;
      if (uVar10 < 3) {
        uVar11 = uVar11 & uVar10 - 1;
      }
      else {
        iVar6 = 0;
        if ((ulong)uVar10 != 0) {
          iVar6 = (int)(uVar14 / uVar10);
        }
        uVar11 = uVar11 - iVar6 * uVar10;
      }
      pcVar7 = (char *)FUN_02bc0470((long)(int)uVar11,lVar12 + 0x58);
      if (*pcVar7 != '\0' && *(long *)(pcVar7 + 8) != 0) {
        (*DAT_043f0e50)(local_498,iVar1,*(long *)(*(long *)(pcVar7 + 8) + 0x40) + 0x10);
      }
    }
    if (((*(char *)(param_1 + 0x278) != '\0') && (lVar9 = *(long *)(param_1 + 0x58), lVar9 != 0)) &&
       (*(char *)(lVar9 + 0xe0) != '\0')) {
      (*DAT_043f0eb0)(local_498,*(undefined4 *)(lVar9 + 0xe4));
    }
    uVar8 = (*DAT_043f0ba8)(local_498);
    *(undefined8 *)(local_4a0 + 0xa0) = uVar8;
    *(undefined1 *)(*(long *)(param_1 + 0x238) + (ulong)*(uint *)(param_1 + 0x270) * 0x18 + 0x10) =
         0;
  }
  return;
}


