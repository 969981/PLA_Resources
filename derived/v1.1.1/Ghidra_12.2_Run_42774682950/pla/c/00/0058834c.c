/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0058834c; name: FUN_0058834c
 */


void FUN_0058834c(undefined4 *param_1,long param_2,long *param_3)

{
  int iVar1;
  ulong uVar2;
  tm *ptVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  undefined1 auVar11 [16];
  int local_98;
  int local_94;
  long local_90;
  long local_88;
  long local_80;
  tm tStack_78;
  long local_38;
  
  if (*(char *)(param_2 + 8) != '\0') {
    lVar8 = *param_3;
    if (lVar8 < 0) {
      if (lVar8 < -0x7ffff894) {
        uVar9 = 0x8000000000000000;
        *param_1 = 0;
        goto LAB_005883e8;
      }
    }
    else if (0x8000076b < lVar8) {
      *param_1 = 0;
      uVar9 = 0x7fffffffffffffff;
LAB_005883e8:
      *(undefined8 *)(param_1 + 6) = uVar9;
      *(undefined8 *)(param_1 + 4) = uVar9;
      *(undefined8 *)(param_1 + 2) = uVar9;
      return;
    }
    uVar2 = FUN_00588910(param_3,0,&local_88,&local_94);
    if (((uVar2 & 1) == 0) ||
       (uVar2 = FUN_00588910(param_3,1,&local_90,&local_98), lVar8 = local_88, local_38 = local_90,
       iVar10 = local_94, iVar1 = local_98, (uVar2 & 1) == 0)) {
      if ((*param_3 < 0x7b2) ||
         ((*param_3 == 0x7b2 &&
          (((char)param_3[1] < '\x01' ||
           (((char)param_3[1] == '\x01' &&
            ((*(char *)((long)param_3 + 9) < '\x01' ||
             ((*(char *)((long)param_3 + 9) == '\x01' &&
              ((*(char *)((long)param_3 + 10) < '\0' ||
               ((*(char *)((long)param_3 + 10) == '\0' &&
                ((*(char *)((long)param_3 + 0xb) < '\0' ||
                 ((*(char *)((long)param_3 + 0xb) == '\0' && (*(char *)((long)param_3 + 0xc) < '\0')
                  ))))))))))))))))))) {
        uVar7 = 0;
        lVar5 = -0x8000000000000000;
        lVar8 = -0x8000000000000000;
        local_88 = -0x8000000000000000;
      }
      else {
        uVar7 = 0;
        lVar5 = 0x7fffffffffffffff;
        lVar8 = 0x7fffffffffffffff;
        local_88 = 0x7fffffffffffffff;
      }
      goto LAB_005885ac;
    }
    if (local_88 == local_90) {
      lVar8 = std::chrono::system_clock::from_time_t(0);
      local_88 = lVar8 / 1000000 + local_88;
      uVar7 = 0;
      lVar5 = local_88;
      lVar8 = local_88;
      goto LAB_005885ac;
    }
    if (local_90 < local_88) {
      local_90 = local_88;
      local_88 = local_38;
      local_98 = local_94;
      local_94 = iVar1;
      if (local_38 + 1 != lVar8) {
LAB_00588600:
        iVar10 = local_98;
        lVar6 = (long)local_98;
        lVar8 = local_90;
        lVar5 = local_88;
        local_38 = local_88;
        do {
          while( true ) {
            lVar4 = lVar8 - lVar5;
            if (lVar4 < 0) {
              lVar4 = lVar4 + 1;
            }
            local_80 = lVar5 + (lVar4 >> 1);
            ptVar3 = localtime_r(&local_80,&tStack_78);
            if (ptVar3 == (tm *)0x0) goto joined_r0x00588670;
            if (ptVar3->tm_gmtoff != lVar6) break;
            lVar8 = local_80;
            if (lVar5 + 1 == local_80) goto LAB_005886ac;
          }
          lVar5 = local_80;
          local_38 = local_80;
        } while (local_80 + 1 != lVar8);
      }
    }
    else {
      local_38 = local_88;
      lVar8 = local_90;
      iVar10 = local_98;
      if (local_88 + 1 != local_90) goto LAB_00588600;
    }
LAB_005886ac:
    lVar4 = std::chrono::system_clock::from_time_t(0);
    lVar6 = local_88;
    lVar5 = local_90;
    lVar8 = lVar4 / 1000000 + lVar8;
    if (local_94 < iVar10) {
      lVar4 = std::chrono::system_clock::from_time_t(0);
      lVar6 = local_88;
      lVar5 = lVar4 / 1000000 + lVar5;
      lVar4 = std::chrono::system_clock::from_time_t(0);
      local_88 = lVar4 / 1000000 + lVar6;
      uVar7 = 1;
    }
    else {
      lVar5 = std::chrono::system_clock::from_time_t(0);
      lVar4 = local_90;
      lVar5 = lVar5 / 1000000 + lVar6;
      lVar6 = std::chrono::system_clock::from_time_t(0);
      local_88 = lVar6 / 1000000 + lVar4;
      uVar7 = 2;
    }
LAB_005885ac:
    *param_1 = uVar7;
    *(long *)(param_1 + 6) = local_88;
    *(long *)(param_1 + 2) = lVar5;
    *(long *)(param_1 + 4) = lVar8;
    return;
  }
  if (((DAT_0439ee30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0439ee30), iVar1 != 0)) {
    lVar8 = std::chrono::system_clock::from_time_t(0);
    lVar8 = -0x8000000000000000 - lVar8 / 1000000;
    auVar11 = FUN_00586060(0x7b2,1,1,0,lVar8 / 0x3c,lVar8 % 0x3c);
    DAT_0439ee40 = auVar11._0_8_;
    DAT_0439ee48 = auVar11._8_8_ & 0xffffffffff;
    __cxa_guard_release(&DAT_0439ee30);
  }
  if (((DAT_0439ee38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0439ee38), iVar1 != 0)) {
    lVar8 = std::chrono::system_clock::from_time_t(0);
    lVar8 = 0x7fffffffffffffff - lVar8 / 1000000;
    auVar11 = FUN_00586060(0x7b2,1,1,0,lVar8 / 0x3c,lVar8 % 0x3c);
    DAT_0439ee50 = auVar11._0_8_;
    DAT_0439ee58 = auVar11._8_8_ & 0xffffffffff;
    __cxa_guard_release(&DAT_0439ee38);
  }
  lVar8 = *param_3;
  if (lVar8 < DAT_0439ee40) {
LAB_005883c8:
    lVar8 = -0x8000000000000000;
    goto LAB_005887c8;
  }
  if (lVar8 == DAT_0439ee40) {
    if ((char)param_3[1] < (char)DAT_0439ee48) goto LAB_005883c8;
    if ((char)param_3[1] == (char)DAT_0439ee48) {
      if (*(char *)((long)param_3 + 9) < DAT_0439ee48._1_1_) goto LAB_005883c8;
      if (*(char *)((long)param_3 + 9) == DAT_0439ee48._1_1_) {
        if (*(char *)((long)param_3 + 10) < DAT_0439ee48._2_1_) goto LAB_005883c8;
        if (*(char *)((long)param_3 + 10) == DAT_0439ee48._2_1_) {
          if ((*(char *)((long)param_3 + 0xb) < DAT_0439ee48._3_1_) ||
             ((*(char *)((long)param_3 + 0xb) == DAT_0439ee48._3_1_ &&
              (*(char *)((long)param_3 + 0xc) < DAT_0439ee48._4_1_)))) goto LAB_005883c8;
        }
      }
    }
  }
  if (DAT_0439ee50 < lVar8) {
LAB_00588564:
    lVar8 = 0x7fffffffffffffff;
  }
  else {
    if (DAT_0439ee50 == lVar8) {
      if ((char)DAT_0439ee58 < (char)param_3[1]) goto LAB_00588564;
      if ((char)DAT_0439ee58 == (char)param_3[1]) {
        if (DAT_0439ee58._1_1_ < *(char *)((long)param_3 + 9)) goto LAB_00588564;
        if (DAT_0439ee58._1_1_ == *(char *)((long)param_3 + 9)) {
          if (DAT_0439ee58._2_1_ < *(char *)((long)param_3 + 10)) goto LAB_00588564;
          if (DAT_0439ee58._2_1_ == *(char *)((long)param_3 + 10)) {
            if ((DAT_0439ee58._3_1_ < *(char *)((long)param_3 + 0xb)) ||
               ((DAT_0439ee58._3_1_ == *(char *)((long)param_3 + 0xb) &&
                (DAT_0439ee58._4_1_ < *(char *)((long)param_3 + 0xc))))) goto LAB_00588564;
          }
        }
      }
    }
    uVar2 = param_3[1];
    lVar8 = FUN_005868a0(lVar8,uVar2 & 0xffffffff,uVar2 >> 8,0x7b2,1,1);
    lVar5 = std::chrono::system_clock::from_time_t(0);
    lVar8 = lVar5 / 1000000 + (long)(int)(char)(uVar2 >> 0x20) +
            ((lVar8 * 0x18 + (long)(((int)uVar2 << 8) >> 0x18)) * 0x3c + (long)((int)uVar2 >> 0x18))
            * 0x3c;
  }
LAB_005887c8:
  *param_1 = 0;
  *(long *)(param_1 + 6) = lVar8;
  *(long *)(param_1 + 2) = lVar8;
  *(long *)(param_1 + 4) = lVar8;
  return;
  while ((ptVar3 = localtime_r(&local_38,&tStack_78), lVar5 = local_38, ptVar3 == (tm *)0x0 ||
         (ptVar3->tm_gmtoff != lVar6))) {
joined_r0x00588670:
    local_38 = lVar5 + 1;
    if (local_38 == lVar8) goto LAB_005886ac;
  }
  lVar8 = local_38;
  goto LAB_005886ac;
}


