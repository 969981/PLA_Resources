/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec98a8; name: FUN_02ec98a8
 */


uint FUN_02ec98a8(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  uint uVar11;
  long lVar12;
  uint local_58;
  uint uStack_54;
  
  if ((int)DAT_042ab25c < 1) {
    DAT_042ab25c = 0x15;
  }
  uVar2 = 0;
  if (DAT_042ab25c != 0) {
    uVar2 = 1000 / DAT_042ab25c;
  }
  uVar1 = *(uint *)(DAT_0440a128 + 0x78);
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = uVar1 / uVar2;
  }
  uVar11 = (uint)DAT_0440a544;
  if ((DAT_0440a5b4 != '\0') && (DAT_0440a7e0 != 0)) {
    DAT_0440a5b4 = '\0';
    FUN_02ec8b50(DAT_0440a7e0,0);
    FUN_02ec7d7c(DAT_0440a7e0,2);
  }
  lVar12 = DAT_0440a7e0;
  cVar4 = DAT_0440a5b8;
  local_58 = 0xffffffff;
  uStack_54 = 0;
  if (DAT_0440a7e0 == 0) {
    iVar7 = 0;
    bVar6 = true;
    goto LAB_02ec9a44;
  }
  iVar9 = *(int *)(DAT_0440a7e0 + 0x160);
  plVar10 = *(long **)(DAT_0440a7e0 + 0x138);
  if (uVar11 <= uVar1 - uVar3 * uVar2 && (param_1 & 1) == 0) {
    if (plVar10 == (long *)0x0) {
LAB_02ec9d38:
      iVar9 = 2;
      if (*(char *)(lVar12 + 0x165) != '\0') goto LAB_02ec9ac4;
LAB_02ec9d44:
      bVar6 = true;
    }
    else {
      if (DAT_0440a7c8 == '\0') {
        if (iVar9 != 1) {
          iVar9 = 2;
        }
        iVar7 = (**(code **)(*plVar10 + 0x40))(plVar10,&uStack_54);
        if (iVar7 == 2) {
          FUN_02ec8b50(lVar12,0);
          goto LAB_02ec9d38;
        }
      }
      if (*(char *)(lVar12 + 0x165) == '\0') goto LAB_02ec9d44;
LAB_02ec9ac4:
      if (*(int *)(lVar12 + 0x160) == 0) goto LAB_02ec9d44;
      bVar6 = *(int *)(lVar12 + 0x18) == 0xb5;
    }
    if (iVar9 == 1) {
      if ((!bVar6) && (uStack_54 <= local_58)) {
        local_58 = uStack_54;
      }
    }
    else {
      bVar6 = true;
    }
    lVar12 = *(long *)(lVar12 + 8);
    if (lVar12 == 0) {
      iVar7 = 0;
    }
    else {
      do {
        plVar10 = *(long **)(lVar12 + 0x138);
        if (plVar10 == (long *)0x0) {
LAB_02ec9d60:
          iVar7 = 2;
          if (*(char *)(lVar12 + 0x165) != '\0') goto LAB_02ec9b4c;
LAB_02ec9d6c:
          bVar5 = true;
        }
        else {
          iVar7 = *(int *)(lVar12 + 0x160);
          if (DAT_0440a7c8 == '\0') {
            if (iVar7 != 1) {
              iVar7 = 2;
            }
            iVar9 = (**(code **)(*plVar10 + 0x40))(plVar10,&uStack_54);
            if (iVar9 == 2) {
              FUN_02ec8b50(lVar12,0);
              goto LAB_02ec9d60;
            }
          }
          if (*(char *)(lVar12 + 0x165) == '\0') goto LAB_02ec9d6c;
LAB_02ec9b4c:
          if (*(int *)(lVar12 + 0x160) == 0) goto LAB_02ec9d6c;
          bVar5 = *(int *)(lVar12 + 0x18) == 0xb5;
        }
        if (iVar7 == 1) {
          if ((!bVar5) && (uStack_54 <= local_58)) {
            local_58 = uStack_54;
          }
          bVar6 = (bool)(bVar6 & bVar5);
        }
        lVar12 = *(long *)(lVar12 + 8);
        iVar7 = 0;
      } while (lVar12 != 0);
    }
    goto LAB_02ec9a44;
  }
  if (plVar10 == (long *)0x0) {
LAB_02ec9ca0:
    iVar9 = 2;
    if (*(char *)(lVar12 + 0x165) != '\0') goto LAB_02ec9978;
LAB_02ec9cac:
    bVar5 = true;
  }
  else {
    if (DAT_0440a7c8 == '\0') {
      if (iVar9 != 1) {
        iVar9 = 2;
      }
      iVar7 = (**(code **)(*plVar10 + 0x40))(plVar10,&uStack_54);
      if (iVar7 == 2) {
        FUN_02ec8b50(lVar12,0);
        goto LAB_02ec9ca0;
      }
    }
    if (*(char *)(lVar12 + 0x165) == '\0') goto LAB_02ec9cac;
LAB_02ec9978:
    if (*(int *)(lVar12 + 0x160) == 0) goto LAB_02ec9cac;
    bVar5 = *(int *)(lVar12 + 0x18) == 0xb5;
  }
  iVar7 = 0;
  if (iVar9 == 1) {
LAB_02ec9998:
    if ((!bVar5) && (uStack_54 <= local_58)) {
      local_58 = uStack_54;
    }
    bVar6 = bVar5;
  }
  else {
    if (iVar9 != 2) {
      bVar6 = true;
      lVar12 = *(long *)(lVar12 + 8);
      goto joined_r0x02ec9d88;
    }
    iVar7 = FUN_02ec8c34(lVar12);
    if (iVar7 != 1) {
      bVar6 = true;
      iVar7 = 1;
      lVar12 = *(long *)(lVar12 + 8);
      goto joined_r0x02ec9d88;
    }
    iVar9 = (**(code **)(**(long **)(lVar12 + 0x138) + 0x40))(*(long **)(lVar12 + 0x138),&uStack_54)
    ;
    iVar7 = 1;
    bVar6 = true;
    if (iVar9 == 1) goto LAB_02ec9998;
  }
LAB_02ec99b4:
  lVar12 = *(long *)(lVar12 + 8);
joined_r0x02ec9d88:
  if (lVar12 != 0) {
    do {
      plVar10 = *(long **)(lVar12 + 0x138);
      if (plVar10 == (long *)0x0) {
LAB_02ec9cc8:
        iVar9 = 2;
        if (*(char *)(lVar12 + 0x165) != '\0') goto LAB_02ec99f8;
LAB_02ec9cd4:
        bVar5 = true;
      }
      else {
        iVar9 = *(int *)(lVar12 + 0x160);
        if (DAT_0440a7c8 == '\0') {
          if (iVar9 != 1) {
            iVar9 = 2;
          }
          iVar8 = (**(code **)(*plVar10 + 0x40))(plVar10,&uStack_54);
          if (iVar8 == 2) {
            FUN_02ec8b50(lVar12,0);
            goto LAB_02ec9cc8;
          }
        }
        if (*(char *)(lVar12 + 0x165) == '\0') goto LAB_02ec9cd4;
LAB_02ec99f8:
        if (*(int *)(lVar12 + 0x160) == 0) goto LAB_02ec9cd4;
        bVar5 = *(int *)(lVar12 + 0x18) == 0xb5;
      }
      if (iVar9 != 1) {
        if (iVar9 != 2) goto LAB_02ec99b4;
        iVar9 = FUN_02ec8c34(lVar12);
        iVar7 = iVar7 + 1;
        if ((iVar9 != 1) ||
           (iVar9 = (**(code **)(**(long **)(lVar12 + 0x138) + 0x40))
                              (*(long **)(lVar12 + 0x138),&uStack_54), iVar9 != 1))
        goto LAB_02ec99b4;
      }
      if ((!bVar5) && (uStack_54 <= local_58)) {
        local_58 = uStack_54;
      }
      bVar6 = (bool)(bVar6 & bVar5);
      lVar12 = *(long *)(lVar12 + 8);
      if (lVar12 == 0) break;
    } while( true );
  }
LAB_02ec9a44:
  DAT_0440a5b8 = bVar6;
  if (DAT_0440a7d0 == 0) {
    local_58 = 0;
  }
  else {
    if ((bool)DAT_0440a5b8) {
      plVar10 = *(long **)(DAT_0440a7e0 + 0x138);
      if ((plVar10 == (long *)0x0) ||
         (iVar9 = (**(code **)(*plVar10 + 0x40))(plVar10,&local_58), iVar9 != 1)) {
        DAT_0440a5b4 = 1;
        return 0;
      }
      if (cVar4 == '\0') {
        FUN_02ec9278(1,0);
        local_58 = 0;
      }
    }
    else if ((cVar4 != '\0') && (DAT_0440a7c8 == '\0')) {
      (**(code **)(**(long **)(DAT_0440a7e0 + 0x138) + 0x40))
                (*(long **)(DAT_0440a7e0 + 0x138),&local_58);
    }
    if (iVar7 != 0) {
      FUN_02f14074(0);
    }
  }
  return local_58;
}


