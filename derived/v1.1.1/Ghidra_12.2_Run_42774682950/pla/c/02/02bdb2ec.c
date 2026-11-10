/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bdb2ec; name: FUN_02bdb2ec
 */


undefined8 FUN_02bdb2ec(long param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  
  if (*(int *)(param_1 + 0x7c) != 2) {
    return 0;
  }
  if (param_2 == 0) {
    param_2 = *(int *)(param_1 + 0xfc);
  }
  if (param_2 == 5) {
    return 0;
  }
  if (*(long *)(param_1 + 0x100) == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x1d8) != 1) {
    return 0;
  }
  if (*(long *)(param_1 + 0x168) - *(long *)(param_1 + 0x160) != 8) {
    return 0;
  }
  lVar10 = *(long *)(param_1 + 0x1b8);
  FUN_02bd7678(param_1,*(undefined2 *)(*(long *)(lVar10 + 0x18) + 0xb2));
  uVar12 = *(undefined8 *)(*(long *)(lVar10 + 0x18) + 0x70);
  lVar10 = nn::os::GetCurrentThread();
  plVar13 = (long *)(param_1 + 600);
  do {
    if (*plVar13 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x24c));
        while (*plVar13 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *plVar13 = lVar10;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02bdb3cc;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar3) {
      *plVar13 = lVar10;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_02bdb3cc:
  *(undefined8 *)(param_1 + 600) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x24c));
  puVar7 = *(undefined8 **)(param_1 + 0x220);
  if (puVar7 != *(undefined8 **)(param_1 + 0x228)) {
    *puVar7 = uVar12;
    *(long *)(param_1 + 0x220) = *(long *)(param_1 + 0x220) + 8;
    goto LAB_02bdb584;
  }
  lVar10 = (long)puVar7 - *(long *)(param_1 + 0x218) >> 3;
  uVar4 = lVar10 + 1;
  if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = (long)*(undefined8 **)(param_1 + 0x228) - *(long *)(param_1 + 0x218);
  if ((ulong)(lVar5 >> 3) < 0xfffffffffffffff) {
    uVar6 = lVar5 >> 2;
    if (uVar4 <= uVar6) {
      uVar4 = uVar6;
    }
    if (uVar4 != 0) goto LAB_02bdb448;
    lVar5 = 0;
  }
  else {
    uVar4 = 0x1fffffffffffffff;
LAB_02bdb448:
    lVar5 = (**(code **)(**(long **)(param_1 + 0x230) + 0x10))
                      (*(long **)(param_1 + 0x230),uVar4 << 3,8);
    if (lVar5 == 0) {
      (**(code **)(**(long **)(param_1 + 0x230) + 0xb8))();
    }
  }
  puVar7 = (undefined8 *)(lVar5 + lVar10 * 8);
  puVar8 = puVar7 + 1;
  *puVar7 = uVar12;
  puVar11 = *(undefined8 **)(param_1 + 0x218);
  puVar9 = *(undefined8 **)(param_1 + 0x220);
  if ((long)puVar9 - (long)puVar11 != 0) {
    uVar6 = ((long)puVar9 - (long)puVar11) - 8;
    uVar1 = ((uint)(uVar6 >> 3) & 0x1fffffff) + 1;
    if ((uVar1 & 3) != 0) {
      lVar10 = -((ulong)uVar1 & 3);
      do {
        puVar9 = puVar9 + -1;
        bVar3 = lVar10 != -1;
        lVar10 = lVar10 + 1;
        puVar7 = puVar7 + -1;
        *puVar7 = *puVar9;
      } while (bVar3);
    }
    if (0x17 < uVar6) {
      do {
        puVar7[-1] = puVar9[-1];
        puVar7[-2] = puVar9[-2];
        puVar7[-3] = puVar9[-3];
        puVar9 = puVar9 + -4;
        puVar7 = puVar7 + -4;
        *puVar7 = *puVar9;
      } while (puVar11 != puVar9);
    }
    puVar11 = *(undefined8 **)(param_1 + 0x218);
  }
  *(undefined8 **)(param_1 + 0x218) = puVar7;
  lVar10 = *(long *)(param_1 + 0x228);
  *(undefined8 **)(param_1 + 0x220) = puVar8;
  *(ulong *)(param_1 + 0x228) = lVar5 + uVar4 * 8;
  if (puVar11 != (undefined8 *)0x0) {
    plVar13 = *(long **)(param_1 + 0x230);
    lVar10 = lVar10 - (long)puVar11;
    uVar4 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    if ((uVar4 & 1) != 0) {
      lVar5 = tpidr_el0;
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar13,puVar11,lVar10,8);
        goto LAB_02bdb584;
      }
    }
    (**(code **)(*plVar13 + 0x18))(plVar13,puVar11,lVar10,8);
  }
LAB_02bdb584:
  *(undefined1 *)(param_1 + 0x262) = 1;
  return 1;
}


