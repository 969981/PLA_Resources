/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a68d40; name: FUN_02a68d40
 */


long FUN_02a68d40(long *param_1,long param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  code *pcVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  
  if (0 < param_4 - param_3) {
    lVar6 = *param_1;
    uVar4 = param_1[1];
    lVar18 = param_4 - param_3 >> 7;
    lVar15 = param_2 - lVar6 >> 7;
    if ((long)(param_1[2] - uVar4) >> 7 < lVar18) {
      uVar10 = param_1[4];
      uVar4 = lVar18 + ((long)(uVar4 - lVar6) >> 7);
      if (0x7ffffffffffffffe < uVar10) {
        uVar10 = 0x7fffffffffffffff;
      }
      if (uVar10 < uVar4) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar6 = param_1[2] - lVar6;
      uVar7 = lVar6 >> 6;
      if (uVar4 <= uVar7) {
        uVar4 = uVar7;
      }
      plVar13 = param_1 + 3;
      if ((ulong)(lVar6 >> 7) < uVar10 >> 1) {
        uVar10 = uVar4;
      }
      if (uVar10 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = (**(code **)(*(long *)*plVar13 + 0x10))((long *)*plVar13,uVar10 << 7,0x10);
        if (lVar6 == 0) {
          (**(code **)(*(long *)*plVar13 + 0xb8))();
        }
      }
      lVar18 = lVar6 + lVar15 * 0x80;
      lVar15 = lVar18;
      for (; param_3 != param_4; param_3 = param_3 + 0x80) {
        FUN_02a691e0(plVar13,lVar15,param_3);
        lVar15 = lVar15 + 0x80;
      }
      lVar17 = *param_1;
      lVar14 = lVar18;
      if (lVar17 != param_2) {
        lVar12 = param_2;
        do {
          lVar14 = lVar14 + -0x80;
          lVar12 = lVar12 + -0x80;
          FUN_00d9361c(plVar13,lVar14,lVar12);
        } while (lVar17 != lVar12);
      }
      lVar17 = param_1[1];
      if (lVar17 != param_2) {
        do {
          FUN_00d9361c(plVar13,lVar15,param_2);
          param_2 = param_2 + 0x80;
          lVar15 = lVar15 + 0x80;
        } while (lVar17 != param_2);
        param_2 = param_1[1];
      }
      lVar17 = *param_1;
      *param_1 = lVar14;
      param_1[1] = lVar15;
      lVar15 = param_1[2];
      param_1[2] = lVar6 + uVar10 * 0x80;
      while (lVar6 = param_2, lVar6 != lVar17) {
        pcVar8 = *(code **)(lVar6 + -0x78);
        param_2 = lVar6 + -0x80;
        if (pcVar8 != (code *)0x0) {
          *(undefined8 *)(lVar6 + -0x70) = 0;
          *(undefined8 *)(lVar6 + -0x68) = 0;
          *(undefined8 *)(lVar6 + -0x80) = 0;
          *(undefined8 *)(lVar6 + -0x78) = 0;
          (*pcVar8)(lVar6 + -0x60);
        }
      }
      if (lVar17 == 0) {
        return lVar18;
      }
      plVar13 = (long *)*plVar13;
      uVar4 = (**(code **)(*plVar13 + 0xc0))(plVar13);
      if ((uVar4 & 1) != 0) {
        lVar6 = tpidr_el0;
        if (*(char *)(lVar6 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar6 + 0x38d488) = 1;
          *(undefined8 *)(lVar6 + 0x38d478) = 0;
          *(undefined8 *)(lVar6 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar6 + 0x38d480)) {
          FUN_02bcc824(plVar13,lVar17,lVar15 - lVar17,0x10);
          return lVar18;
        }
      }
      (**(code **)(*plVar13 + 0x18))(plVar13,lVar17,lVar15 - lVar17,0x10);
      return lVar18;
    }
    lVar14 = (long)(uVar4 - param_2) >> 7;
    uVar10 = uVar4;
    if (lVar14 < lVar18) {
      lVar14 = param_3 + lVar14 * 0x80;
      if (lVar14 != param_4) {
        lVar17 = lVar14;
        do {
          FUN_02a691e0(param_1 + 3,uVar10,lVar17);
          lVar17 = lVar17 + 0x80;
          uVar10 = param_1[1] + 0x80;
          param_1[1] = uVar10;
        } while (param_4 != lVar17);
      }
      if ((long)(uVar4 - param_2) < 1) {
        return param_2;
      }
      param_4 = lVar14;
    }
    uVar7 = uVar10 + lVar18 * -0x80;
    lVar18 = uVar10 - (param_2 + lVar18 * 0x80);
    if (uVar7 < uVar4) {
      uVar5 = uVar10;
      uVar16 = uVar7;
      do {
        FUN_00d9361c(param_1 + 3,uVar5,uVar16);
        uVar16 = uVar16 + 0x80;
        uVar5 = param_1[1] + 0x80;
        param_1[1] = uVar5;
      } while (uVar16 < uVar4);
    }
    if (lVar18 != 0) {
      lVar18 = lVar18 >> 7;
      lVar14 = 0;
      do {
        lVar17 = uVar10 + lVar14;
        pcVar8 = *(code **)(lVar17 + -0x78);
        if (pcVar8 != (code *)0x0) {
          *(undefined8 *)(lVar17 + -0x70) = 0;
          *(undefined8 *)(lVar17 + -0x68) = 0;
          *(undefined8 *)(lVar17 + -0x80) = 0;
          *(undefined8 *)(lVar17 + -0x78) = 0;
          (*pcVar8)(lVar17 + -0x60);
        }
        lVar12 = uVar7 + lVar14;
        if (*(code **)(lVar12 + -0x68) != (code *)0x0) {
          (**(code **)(lVar12 + -0x68))(lVar12 + -0x60,lVar17 + -0x60);
          uVar9 = *(undefined8 *)(lVar12 + -0x80);
          uVar11 = *(undefined8 *)(lVar12 + -0x68);
          uVar3 = *(undefined8 *)(lVar12 + -0x78);
          *(undefined8 *)(lVar17 + -0x70) = *(undefined8 *)(lVar12 + -0x70);
          *(undefined8 *)(lVar17 + -0x68) = uVar11;
          *(undefined8 *)(lVar17 + -0x80) = uVar9;
          *(undefined8 *)(lVar17 + -0x78) = uVar3;
          pcVar8 = *(code **)(lVar6 + (lVar15 + lVar18) * 0x80 + lVar14 + -0x78);
          if (pcVar8 != (code *)0x0) {
            *(undefined8 *)(lVar12 + -0x70) = 0;
            *(undefined8 *)(lVar12 + -0x68) = 0;
            *(undefined8 *)(lVar12 + -0x80) = 0;
            *(undefined8 *)(lVar12 + -0x78) = 0;
            (*pcVar8)(lVar12 + -0x60);
          }
        }
        lVar14 = lVar14 + -0x80;
      } while (-lVar14 != lVar18 * 0x80);
    }
    if (param_3 != param_4) {
      lVar6 = 0;
      do {
        puVar1 = (undefined8 *)(param_2 + lVar6);
        pcVar8 = (code *)puVar1[1];
        if (pcVar8 != (code *)0x0) {
          puVar1[2] = 0;
          puVar1[3] = 0;
          *puVar1 = 0;
          puVar1[1] = 0;
          (*pcVar8)(puVar1 + 4);
        }
        puVar2 = (undefined8 *)(param_3 + lVar6);
        if ((code *)puVar2[2] != (code *)0x0) {
          (*(code *)puVar2[2])(puVar2 + 4,puVar1 + 4);
          uVar3 = *puVar2;
          uVar9 = puVar2[1];
          uVar11 = puVar2[3];
          puVar1[2] = puVar2[2];
          puVar1[3] = uVar11;
          *puVar1 = uVar3;
          puVar1[1] = uVar9;
        }
        lVar6 = lVar6 + 0x80;
      } while (param_4 - param_3 != lVar6);
    }
  }
  return param_2;
}


