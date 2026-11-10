/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f8d40; name: FUN_002f8d40
 */


void FUN_002f8d40(void)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  int iVar4;
  char *pcVar5;
  void *pvVar6;
  size_t sVar7;
  undefined8 *__ptr;
  undefined **ppuVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  char *pcVar12;
  long lVar13;
  ulong uVar14;
  char *local_68;
  
  FUN_002eead8(&local_68,&PTR_s_grpc_poll_strategy_041532c0);
  pcVar12 = local_68;
  pcVar5 = strchr(local_68,0x2c);
  if (pcVar5 == (char *)0x0) {
    lVar9 = 0;
    lVar13 = 0;
    sVar7 = strlen(pcVar12);
  }
  else {
    lVar9 = 0;
    lVar13 = 0;
    lVar11 = 8;
    do {
      sVar7 = (long)pcVar5 - (long)pcVar12;
      if (pcVar5 < pcVar12) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/ev_posix.cc",0x98,2,
                     "assertion failed: %s","end >= beg");
                    /* WARNING: Subroutine does not return */
        abort();
      }
                    /* try { // try from 002f8da0 to 002f8da3 has its CatchHandler @ 002f9370 */
      pvVar6 = (void *)FUN_002ebd50(sVar7 + 1);
      memcpy(pvVar6,pcVar12,sVar7);
      *(undefined1 *)((long)pvVar6 + sVar7) = 0;
                    /* try { // try from 002f8db8 to 002f8dc3 has its CatchHandler @ 002f9370 */
      lVar9 = FUN_002ebdc0(lVar9,lVar11);
      pcVar12 = pcVar5 + 1;
      *(void **)(lVar9 + lVar13 * 8) = pvVar6;
      lVar13 = lVar13 + 1;
      pcVar5 = strchr(pcVar12,0x2c);
      lVar11 = lVar11 + 8;
    } while (pcVar5 != (char *)0x0);
    sVar7 = strlen(pcVar12);
  }
  if ((long)sVar7 < 0) {
                    /* try { // try from 002f92c0 to 002f932f has its CatchHandler @ 002f9334 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/ev_posix.cc",0x98,2,
                 "assertion failed: %s","end >= beg");
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* try { // try from 002f8e04 to 002f8e07 has its CatchHandler @ 002f9334 */
  pvVar6 = (void *)FUN_002ebd50(sVar7 + 1);
  uVar14 = lVar13 + 1;
  memcpy(pvVar6,pcVar12,sVar7);
  *(undefined1 *)((long)pvVar6 + sVar7) = 0;
                    /* try { // try from 002f8e24 to 002f8e2b has its CatchHandler @ 002f9334 */
  __ptr = (undefined8 *)FUN_002ebdc0(lVar9,uVar14 * 8);
  __ptr[lVar13] = pvVar6;
  puVar10 = __ptr;
  if ((uVar14 == 0) || (DAT_043997f8 != 0)) {
    if (uVar14 == 0) goto LAB_002f9268;
  }
  else {
    lVar13 = 0;
    do {
      pcVar2 = DAT_041532d8;
      puVar1 = PTR_s_head_custom_041532d0;
      pcVar12 = (char *)__ptr[lVar13];
      if ((DAT_041532d8 == (code *)0x0) ||
         ((iVar4 = strcmp(pcVar12,"all"), iVar4 != 0 && (iVar4 = strcmp(pcVar12,puVar1), iVar4 != 0)
          ))) {
LAB_002f8ebc:
        pcVar2 = DAT_041532e8;
        puVar1 = PTR_s_head_custom_041532e0;
        if ((DAT_041532e8 != (code *)0x0) &&
           ((iVar4 = strcmp(pcVar12,"all"), iVar4 == 0 ||
            (iVar4 = strcmp(pcVar12,puVar1), iVar4 == 0)))) {
          iVar4 = strcmp(pcVar12,puVar1);
          DAT_043997f8 = (*pcVar2)(iVar4 == 0);
          ppuVar8 = &PTR_s_head_custom_041532e0;
          if (DAT_043997f8 != 0) goto LAB_002f91f8;
        }
        pcVar2 = DAT_041532f8;
        puVar1 = PTR_s_head_custom_041532f0;
        if ((DAT_041532f8 != (code *)0x0) &&
           ((iVar4 = strcmp(pcVar12,"all"), iVar4 == 0 ||
            (iVar4 = strcmp(pcVar12,puVar1), iVar4 == 0)))) {
          iVar4 = strcmp(pcVar12,puVar1);
          DAT_043997f8 = (*pcVar2)(iVar4 == 0);
          ppuVar8 = &PTR_s_head_custom_041532f0;
          if (DAT_043997f8 != 0) goto LAB_002f91f8;
        }
        pcVar2 = DAT_04153308;
        puVar1 = PTR_s_head_custom_04153300;
        if ((DAT_04153308 != (code *)0x0) &&
           ((iVar4 = strcmp(pcVar12,"all"), iVar4 == 0 ||
            (iVar4 = strcmp(pcVar12,puVar1), iVar4 == 0)))) {
          iVar4 = strcmp(pcVar12,puVar1);
          DAT_043997f8 = (*pcVar2)(iVar4 == 0);
          ppuVar8 = &PTR_s_head_custom_04153300;
          if (DAT_043997f8 != 0) goto LAB_002f91f8;
        }
        puVar3 = PTR_FUN_04153318;
        puVar1 = PTR_DAT_04153310;
        if ((PTR_FUN_04153318 != (undefined *)0x0) &&
           ((iVar4 = strcmp(pcVar12,"all"), iVar4 == 0 ||
            (iVar4 = strcmp(pcVar12,puVar1), iVar4 == 0)))) {
          iVar4 = strcmp(pcVar12,puVar1);
          DAT_043997f8 = (*(code *)puVar3)(iVar4 == 0);
          ppuVar8 = &PTR_DAT_04153310;
          if (DAT_043997f8 != 0) goto LAB_002f91f8;
        }
        puVar3 = PTR_FUN_04153328;
        puVar1 = PTR_DAT_04153320;
        if ((PTR_FUN_04153328 != (undefined *)0x0) &&
           ((iVar4 = strcmp(pcVar12,"all"), iVar4 == 0 ||
            (iVar4 = strcmp(pcVar12,puVar1), iVar4 == 0)))) {
          iVar4 = strcmp(pcVar12,puVar1);
          DAT_043997f8 = (*(code *)puVar3)(iVar4 == 0);
          ppuVar8 = &PTR_DAT_04153320;
          if (DAT_043997f8 != 0) goto LAB_002f91f8;
        }
        pcVar2 = DAT_04153338;
        puVar1 = PTR_s_tail_custom_04153330;
        if ((DAT_04153338 != (code *)0x0) &&
           ((iVar4 = strcmp(pcVar12,"all"), iVar4 == 0 ||
            (iVar4 = strcmp(pcVar12,puVar1), iVar4 == 0)))) {
          iVar4 = strcmp(pcVar12,puVar1);
          DAT_043997f8 = (*pcVar2)(iVar4 == 0);
          ppuVar8 = &PTR_s_tail_custom_04153330;
          if (DAT_043997f8 != 0) goto LAB_002f91f8;
        }
        pcVar2 = DAT_04153348;
        puVar1 = PTR_s_tail_custom_04153340;
        if ((DAT_04153348 != (code *)0x0) &&
           ((iVar4 = strcmp(pcVar12,"all"), iVar4 == 0 ||
            (iVar4 = strcmp(pcVar12,puVar1), iVar4 == 0)))) {
          iVar4 = strcmp(pcVar12,puVar1);
          DAT_043997f8 = (*pcVar2)(iVar4 == 0);
          ppuVar8 = &PTR_s_tail_custom_04153340;
          if (DAT_043997f8 != 0) goto LAB_002f91f8;
        }
        pcVar2 = DAT_04153358;
        puVar1 = PTR_s_tail_custom_04153350;
        if ((DAT_04153358 != (code *)0x0) &&
           ((iVar4 = strcmp(pcVar12,"all"), iVar4 == 0 ||
            (iVar4 = strcmp(pcVar12,puVar1), iVar4 == 0)))) {
          iVar4 = strcmp(pcVar12,puVar1);
          DAT_043997f8 = (*pcVar2)(iVar4 == 0);
          ppuVar8 = &PTR_s_tail_custom_04153350;
          if (DAT_043997f8 != 0) goto LAB_002f91f8;
        }
        pcVar2 = DAT_04153368;
        puVar1 = PTR_s_tail_custom_04153360;
        if ((DAT_04153368 != (code *)0x0) &&
           ((iVar4 = strcmp(pcVar12,"all"), iVar4 == 0 ||
            (iVar4 = strcmp(pcVar12,puVar1), iVar4 == 0)))) {
          iVar4 = strcmp(pcVar12,puVar1);
          DAT_043997f8 = (*pcVar2)(iVar4 == 0);
          ppuVar8 = &PTR_s_tail_custom_04153360;
          if (DAT_043997f8 != 0) goto LAB_002f91f8;
        }
        lVar9 = 0;
      }
      else {
        iVar4 = strcmp(pcVar12,puVar1);
                    /* try { // try from 002f8ea8 to 002f921b has its CatchHandler @ 002f935c */
        DAT_043997f8 = (*pcVar2)(iVar4 == 0);
        ppuVar8 = &PTR_s_head_custom_041532d0;
        if (DAT_043997f8 == 0) goto LAB_002f8ebc;
LAB_002f91f8:
        DAT_043997f0 = *ppuVar8;
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/ev_posix.cc",0xb6,0,
                     "Using polling engine: %s");
        lVar9 = DAT_043997f8;
      }
    } while ((lVar13 + 1U < uVar14) && (lVar13 = lVar13 + 1, lVar9 == 0));
  }
  do {
                    /* try { // try from 002f9258 to 002f925b has its CatchHandler @ 002f9348 */
    free((void *)*puVar10);
    uVar14 = uVar14 - 1;
    puVar10 = puVar10 + 1;
  } while (uVar14 != 0);
LAB_002f9268:
                    /* try { // try from 002f9268 to 002f926f has its CatchHandler @ 002f9334 */
  free(__ptr);
  pcVar12 = local_68;
  if (DAT_043997f8 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/ev_posix.cc",0xee,2,
                 "No event engine could be initialized from %s");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_68 = (char *)0x0;
  if (pcVar12 != (char *)0x0) {
                    /* try { // try from 002f9284 to 002f928b has its CatchHandler @ 002f9330 */
    free(pcVar12);
  }
  return;
}


