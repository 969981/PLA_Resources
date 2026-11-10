/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028584ac; name: FUN_028584ac
 */


void FUN_028584ac(long param_1,uint param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long *plVar5;
  int iVar6;
  undefined8 uVar7;
  char *pcVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  undefined4 uVar14;
  long *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long *local_80;
  undefined4 local_78;
  long *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long *local_50;
  undefined4 local_48;
  long local_38;
  
  if (((DAT_043ebe48 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_043ebe48), iVar6 != 0)) {
    DAT_043ebd60 = 0;
    DAT_043ebd58 = &DAT_03996322;
    DAT_043ebd78 = 0;
    DAT_043ebd68 = 0;
    DAT_043ebd70 = "bin/archive/appli/system_resident.gfpak";
    DAT_043ebd80 = *(undefined8 *)(param_1 + 8);
    DAT_043ebd90 = 0;
    DAT_043ebd88 = "bin/archive/appli/battle_resident.gfpak";
    DAT_043ebd98 = *(undefined8 *)(*(long *)PTR_DAT_04379ff8 + 0x68);
    DAT_043ebdd0 = "bin/archive/appli/poke_dex.gfpak";
    DAT_043ebde8 = "bin/archive/appli/map.gfpak";
    DAT_043ebdb8 = "bin/archive/appli/resident_hud_arc01.gfpak";
    DAT_043ebe00 = "bin/archive/appli/pause_menu.gfpak";
    DAT_043ebda0 = "bin/archive/appli/resident_hud_arc00.gfpak";
    DAT_043ebda8 = 0;
    DAT_043ebdc0 = 1;
    DAT_043ebdd8 = 0;
    DAT_043ebdf0 = 0;
    DAT_043ebe08 = 0;
    DAT_043ebe20 = 1;
    DAT_043ebe38 = 0;
    DAT_043ebe18 = "bin/archive/appli/battle_menu.gfpak";
    DAT_043ebe30 = "bin/archive/appli/map_mask_texture.gfpak";
    DAT_043ebdb0 = DAT_043ebd98;
    DAT_043ebdc8 = DAT_043ebd98;
    DAT_043ebde0 = DAT_043ebd98;
    DAT_043ebdf8 = DAT_043ebd98;
    DAT_043ebe10 = DAT_043ebd80;
    DAT_043ebe28 = DAT_043ebd80;
    DAT_043ebe40 = DAT_043ebd80;
    __cxa_guard_release(&DAT_043ebe48);
  }
  if (9 < param_2) {
    return;
  }
  plVar13 = (long *)(param_1 + (ulong)param_2 * 8 + 0x68);
  if (*plVar13 != 0) {
    return;
  }
  uVar12 = (ulong)param_2;
  plVar9 = (long *)(&DAT_043ebd58)[uVar12 * 3];
  cVar2 = (&DAT_043ebd60)[uVar12 * 0x18];
  if (((*PTR_DAT_0437b180 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_0437b180), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_0437b248,PTR_DAT_0437b188,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b180);
  }
  lVar11 = *(long *)PTR_DAT_0437b188;
  *(long *)PTR_DAT_0437b190 = lVar11;
  uVar4 = *(byte *)(lVar11 + 0x50) - 1;
  if (uVar4 < 10) {
    uVar14 = *(undefined4 *)(&DAT_03a7e7d8 + (long)(char)uVar4 * 4);
  }
  else {
    uVar14 = 2;
  }
  local_a0 = plVar9;
  FUN_009f1b84(&local_70,&local_a0);
  plVar5 = local_50;
  plVar9 = local_70;
  if (cVar2 == '\0') {
switchD_028586a0_default:
    local_70 = (long *)0x0;
    local_a0 = plVar9;
    uStack_98 = uStack_68;
    local_50 = (long *)0x0;
    local_90 = local_60;
    uStack_88 = uStack_58;
    local_80 = plVar5;
    local_78 = local_48;
  }
  else {
    switch(uVar14) {
    case 2:
      if (local_70 == (long *)0x0) {
        plVar9 = (long *)PTR_PTR_04379d00;
      }
      else {
        plVar9 = local_70 + 0xc;
      }
      local_38 = *plVar9;
      pcVar8 = "_eng.gfpak";
      break;
    case 3:
      if (local_70 == (long *)0x0) {
        plVar9 = (long *)PTR_PTR_04379d00;
      }
      else {
        plVar9 = local_70 + 0xc;
      }
      local_38 = *plVar9;
      pcVar8 = "_fre.gfpak";
      break;
    case 4:
      if (local_70 == (long *)0x0) {
        plVar9 = (long *)PTR_PTR_04379d00;
      }
      else {
        plVar9 = local_70 + 0xc;
      }
      local_38 = *plVar9;
      pcVar8 = "_ita.gfpak";
      break;
    case 5:
      if (local_70 == (long *)0x0) {
        plVar9 = (long *)PTR_PTR_04379d00;
      }
      else {
        plVar9 = local_70 + 0xc;
      }
      local_38 = *plVar9;
      pcVar8 = "_ger.gfpak";
      break;
    case 6:
      if (local_70 == (long *)0x0) {
        plVar9 = (long *)PTR_PTR_04379d00;
      }
      else {
        plVar9 = local_70 + 0xc;
      }
      local_38 = *plVar9;
      pcVar8 = "_spa.gfpak";
      break;
    case 7:
      if (local_70 == (long *)0x0) {
        plVar9 = (long *)PTR_PTR_04379d00;
      }
      else {
        plVar9 = local_70 + 0xc;
      }
      local_38 = *plVar9;
      pcVar8 = "_kor.gfpak";
      break;
    case 8:
      if (local_70 == (long *)0x0) {
        plVar9 = (long *)PTR_PTR_04379d00;
      }
      else {
        plVar9 = local_70 + 0xc;
      }
      local_38 = *plVar9;
      pcVar8 = "_sch.gfpak";
      break;
    case 9:
      if (local_70 == (long *)0x0) {
        plVar9 = (long *)PTR_PTR_04379d00;
      }
      else {
        plVar9 = local_70 + 0xc;
      }
      local_38 = *plVar9;
      pcVar8 = "_tch.gfpak";
      break;
    default:
      goto switchD_028586a0_default;
    }
    FUN_02859124(&local_a0,&local_38,pcVar8,local_48);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  lVar11 = FUN_00b14c08(&local_70,(&DAT_043ebd68)[uVar12 * 3],&local_a0);
  if (lVar11 != 0) {
    lVar10 = *(long *)(lVar11 + 0x58);
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar9 = (long *)*plVar13;
  *plVar13 = 0;
  if (plVar9 != (long *)0x0) {
    lVar10 = plVar9[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))();
    }
  }
  *plVar13 = lVar11;
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  return;
}


