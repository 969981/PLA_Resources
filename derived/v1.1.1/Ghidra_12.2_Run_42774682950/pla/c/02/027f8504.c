/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027f8504; name: FUN_027f8504
 */


void FUN_027f8504(long param_1)

{
  byte bVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  byte bVar6;
  char cVar7;
  long lVar8;
  code *local_e8;
  undefined1 auStack_d0 [96];
  undefined1 *local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  
  lVar8 = *(long *)(param_1 + 0x138);
  if (lVar8 == 0) {
    return;
  }
  local_e8 = (code *)0x0;
  if (*(code **)(lVar8 + 0x4f0) == (code *)0x0) {
LAB_027f85d0:
    local_70 = &DAT_753f74378b49da9c;
    pcStack_68 = "View_Top";
    local_60 = 8;
    local_58 = (long *)0x0;
    lVar8 = FUN_027f4740(*(undefined8 *)(*(long *)(param_1 + 200) + 0x4c8),&local_70);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    if (*(char *)(lVar8 + 0x5ad) != '\x01') {
      *(undefined1 *)(lVar8 + 0x5ad) = 1;
      FUN_00d42438(lVar8,1,1);
      FUN_02805dc8(lVar8,1);
      if (*(char *)(lVar8 + 0x5ac) != '\x01') {
        *(undefined1 *)(lVar8 + 0x5ac) = 1;
      }
    }
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 200) + 0x4c8);
  }
  else {
    (**(code **)(lVar8 + 0x4f0))(lVar8 + 0x500,auStack_d0);
    local_e8 = *(code **)(lVar8 + 0x4e8);
    if (*(code **)(lVar8 + 0x4e0) == (code *)0x0) goto LAB_027f85d0;
    uVar3 = (**(code **)(lVar8 + 0x4e0))(auStack_d0);
    if ((uVar3 & 1) == 0) {
      lVar8 = *(long *)(param_1 + 200);
LAB_027f8640:
      cVar7 = '\0';
      bVar2 = false;
    }
    else {
      lVar8 = *(long *)(*(long *)(param_1 + 0x138) + 0x4c8);
      if (lVar8 == 0) {
LAB_027f864c:
        lVar8 = *(long *)(param_1 + 200);
      }
      else {
        plVar5 = *(long **)(lVar8 + 0x70);
        if (plVar5 == *(long **)(lVar8 + 0x78)) goto LAB_027f864c;
        bVar1 = 0;
        do {
          bVar6 = bVar1;
          bVar2 = false;
          if (*(long *)(*plVar5 + 0x440) != 0) {
            bVar2 = *(char *)(*(long *)(*plVar5 + 0x440) + 0x90) != '\0';
          }
          plVar5 = plVar5 + 1;
          bVar1 = bVar6 | bVar2;
        } while (*(long **)(lVar8 + 0x78) != plVar5);
        lVar8 = *(long *)(param_1 + 200);
        if ((bool)(bVar6 | bVar2)) goto LAB_027f8640;
      }
      bVar2 = *(char *)(param_1 + 0x360) == '\0';
      cVar7 = '\x01';
    }
    plVar5 = (long *)(param_1 + 200);
    local_70 = &DAT_753f74378b49da9c;
    pcStack_68 = "View_Top";
    local_60 = 8;
    local_58 = (long *)0x0;
    uVar4 = FUN_027f4740(*(undefined8 *)(lVar8 + 0x4c8),&local_70);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    FUN_02805dc8(uVar4,bVar2);
    local_70 = &DAT_753f74378b49da9c;
    pcStack_68 = "View_Top";
    local_60 = 8;
    local_58 = (long *)0x0;
    lVar8 = FUN_027f4740(*(undefined8 *)(*plVar5 + 0x4c8),&local_70);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    if (*(char *)(lVar8 + 0x5ad) != cVar7) {
      *(char *)(lVar8 + 0x5ad) = cVar7;
      FUN_00d42438(lVar8,cVar7,1);
      FUN_02805dc8(lVar8,cVar7);
      if (*(char *)(lVar8 + 0x5ac) == cVar7) goto LAB_027f86f8;
      *(char *)(lVar8 + 0x5ac) = cVar7;
      lVar8 = *plVar5;
      if (cVar7 != '\0') goto LAB_027f8700;
LAB_027f87b0:
      FUN_027f57ec(lVar8,*(undefined1 *)(*(long *)(param_1 + 0x138) + 0x568));
      goto joined_r0x027f8744;
    }
LAB_027f86f8:
    lVar8 = *plVar5;
    if (cVar7 == '\0') goto LAB_027f87b0;
LAB_027f8700:
    uVar4 = *(undefined8 *)(lVar8 + 0x4c8);
  }
  pcStack_68 = "View_Top";
  local_70 = &DAT_753f74378b49da9c;
  local_60 = 8;
  local_58 = (long *)0x0;
  lVar8 = FUN_027f4740(uVar4,&local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  FUN_00d469b4(*(undefined8 *)(lVar8 + 0x68),lVar8,0);
joined_r0x027f8744:
  if (local_e8 != (code *)0x0) {
    (*local_e8)(auStack_d0);
  }
  return;
}


