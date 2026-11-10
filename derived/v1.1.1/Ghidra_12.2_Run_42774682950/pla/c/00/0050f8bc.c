/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0050f8bc; name: FUN_0050f8bc
 */


void FUN_0050f8bc(long param_1,byte *param_2)

{
  size_t __n;
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  size_t sVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  __tree_node_base *p_Var11;
  ulong uVar12;
  long *plVar13;
  byte *pbVar14;
  long lVar15;
  __tree_node_base *p_Var16;
  __tree_node_base *p_Var17;
  long lVar18;
  char *pcVar19;
  __tree_node_base *local_f0;
  undefined8 uStack_e8;
  ulong local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  byte *local_98;
  undefined8 local_90 [2];
  __tree_node_base *local_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 local_58;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    plVar13 = (long *)(param_1 + 0x170);
    plVar6 = (long *)FUN_003667bc(plVar13,&local_80,param_2);
    if (*plVar6 != 0) {
      return;
    }
    FUN_0036ba00(&local_f0,plVar13,param_2);
    *(__tree_node_base **)(local_f0 + 0x10) = local_80;
    *(undefined8 *)local_f0 = 0;
    *(undefined8 *)(local_f0 + 8) = 0;
    *plVar6 = (long)local_f0;
    if (*(long *)*plVar13 != 0) {
      *plVar13 = *(long *)*plVar13;
      local_f0 = (__tree_node_base *)*plVar6;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_1 + 0x178),local_f0);
    *(long *)(param_1 + 0x180) = *(long *)(param_1 + 0x180) + 1;
    return;
  }
  plVar13 = (long *)(param_1 + 0x188);
  local_98 = param_2;
  puVar7 = (undefined8 *)FUN_005213b8(plVar13,&local_80,param_2);
  p_Var11 = (__tree_node_base *)*puVar7;
  if ((__tree_node_base *)*puVar7 == (__tree_node_base *)0x0) {
    FUN_005214d4(&local_f0,plVar13,&DAT_03a2945a,&local_98,&local_58);
    *(__tree_node_base **)(local_f0 + 0x10) = local_80;
    *(undefined8 *)local_f0 = 0;
    *(undefined8 *)(local_f0 + 8) = 0;
    *puVar7 = local_f0;
    p_Var11 = local_f0;
    if (*(long *)*plVar13 != 0) {
      *plVar13 = *(long *)*plVar13;
      p_Var11 = (__tree_node_base *)*puVar7;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_1 + 400),p_Var11);
    *(long *)(param_1 + 0x198) = *(long *)(param_1 + 0x198) + 1;
    p_Var11 = local_f0;
  }
  FUN_0050ff38(&local_98,param_1,param_2);
  uVar12 = *(ulong *)(p_Var11 + 0x68);
  lVar18 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18);
  if (4 < uVar12) {
                    /* try { // try from 0050fa00 to 0050fa47 has its CatchHandler @ 0050ff1c */
    uVar12 = FUN_002f03c0(uVar12,
                          "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                          ,0x328);
  }
  p_Var16 = p_Var11 + 0x50;
  FUN_005b80f4(&local_f0,lVar18 + 0x40,param_2,&local_98,p_Var11 + 0x38,p_Var16,uVar12,
               *(char *)(param_1 + 0x20) == '\0');
  uStack_78 = uStack_e8;
  local_80 = local_f0;
  uStack_68 = uStack_d8;
  uStack_70 = local_e0;
  pcVar19 = *(char **)PTR_PTR_04374a58;
  sVar8 = strlen(pcVar19);
  bVar1 = *param_2;
  __n = (ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    __n = *(size_t *)(param_2 + 8);
  }
  if (sVar8 == __n) {
    if (sVar8 != 0) {
      if (sVar8 == 0xffffffffffffffff) {
                    /* try { // try from 0050fe98 to 0050fe9f has its CatchHandler @ 0050feec */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_out_of_range();
      }
      pbVar14 = *(byte **)(param_2 + 0x10);
      if ((bVar1 & 1) == 0) {
        pbVar14 = param_2 + 1;
      }
      iVar5 = memcmp(pbVar14,pcVar19,sVar8);
      if (iVar5 != 0) goto LAB_0050faa8;
    }
  }
  else {
LAB_0050faa8:
    pcVar19 = *(char **)PTR_PTR_04374a60;
    sVar8 = strlen(pcVar19);
    if (sVar8 == __n) {
      if (__n != 0) {
        if (__n == 0xffffffffffffffff) {
                    /* try { // try from 0050fec8 to 0050fecf has its CatchHandler @ 0050fee8 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_out_of_range();
        }
        pbVar14 = *(byte **)(param_2 + 0x10);
        if ((bVar1 & 1) == 0) {
          pbVar14 = param_2 + 1;
        }
        iVar5 = memcmp(pbVar14,pcVar19,__n);
        if (iVar5 != 0) goto LAB_0050faec;
      }
    }
    else {
LAB_0050faec:
      pcVar19 = *(char **)PTR_PTR_04374a68;
      sVar8 = strlen(pcVar19);
      if (sVar8 == __n) {
        if (__n != 0) {
          if (__n == 0xffffffffffffffff) {
                    /* try { // try from 0050fed0 to 0050fed7 has its CatchHandler @ 0050fee4 */
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_out_of_range();
          }
          pbVar14 = *(byte **)(param_2 + 0x10);
          if ((bVar1 & 1) == 0) {
            pbVar14 = param_2 + 1;
          }
          iVar5 = memcmp(pbVar14,pcVar19,__n);
          if (iVar5 != 0) goto LAB_0050fb30;
        }
      }
      else {
LAB_0050fb30:
        pcVar19 = *(char **)PTR_PTR_04374a70;
        sVar8 = strlen(pcVar19);
        if (sVar8 == __n) {
          if (__n != 0) {
            if (__n == 0xffffffffffffffff) {
                    /* try { // try from 0050fed8 to 0050fedf has its CatchHandler @ 0050fee0 */
                    /* WARNING: Subroutine does not return */
              std::__basic_string_common<true>::__throw_out_of_range();
            }
            pbVar14 = *(byte **)(param_2 + 0x10);
            if ((bVar1 & 1) == 0) {
              pbVar14 = param_2 + 1;
            }
            iVar5 = memcmp(pbVar14,pcVar19,__n);
            if (iVar5 != 0) goto LAB_0050fb74;
          }
        }
        else {
LAB_0050fb74:
                    /* try { // try from 0050fb74 to 0050fc4f has its CatchHandler @ 0050ff20 */
          lVar18 = FUN_00521638(plVar13,param_2);
          if (param_1 + 400 != lVar18) {
            FUN_00521748(plVar13);
          }
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
  if (PTR_DAT_04374a30[0x10] != '\0') {
    uVar9 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18);
    pbVar14 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      pbVar14 = param_2 + 1;
    }
    if (((byte)p_Var11[0x38] & 1) == 0) {
      p_Var17 = p_Var11 + 0x39;
      if (((byte)*p_Var16 & 1) == 0) goto LAB_0050fd9c;
LAB_0050fda4:
      p_Var16 = *(__tree_node_base **)(p_Var11 + 0x60);
    }
    else {
      p_Var17 = *(__tree_node_base **)(p_Var11 + 0x48);
      if (((byte)*p_Var16 & 1) != 0) goto LAB_0050fda4;
LAB_0050fd9c:
      p_Var16 = p_Var11 + 0x51;
    }
                    /* try { // try from 0050fdac to 0050fdaf has its CatchHandler @ 0050ff20 */
    uVar10 = FUN_002f1480(*(undefined8 *)(p_Var11 + 0x68));
                    /* try { // try from 0050fdc0 to 0050fdd7 has its CatchHandler @ 0050ff10 */
    FUN_00521800(&local_f0,local_98,local_90,&DAT_038bdc00,1);
    uVar12 = (ulong)&local_f0 | 1;
    if (((ulong)local_f0 & 1) != 0) {
      uVar12 = local_e0;
    }
                    /* try { // try from 0050fdec to 0050fe1b has its CatchHandler @ 0050fef0 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                 ,0x32f,1,
                 "[xds_client %p] sending ADS request: type=%s version=%s nonce=%s error=%s resources=%s"
                 ,uVar9,pbVar14,p_Var17,p_Var16,uVar10,uVar12);
    if (((byte)local_f0 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_e0);
      uVar12 = *(ulong *)(p_Var11 + 0x68);
      goto joined_r0x0050fe3c;
    }
  }
  uVar12 = *(ulong *)(p_Var11 + 0x68);
joined_r0x0050fe3c:
  if (4 < uVar12) {
    FUN_002f0430(uVar12,
                 "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                 ,0x336);
  }
  *(undefined8 *)(p_Var11 + 0x68) = 0;
  uVar9 = FUN_003c8370(&local_80,1);
  p_Var11 = local_80;
  *(undefined8 *)(param_1 + 0x48) = uVar9;
  if ((local_80 != (__tree_node_base *)0x0) &&
     (plVar13 = *(long **)local_80, plVar13 != (long *)0x0)) {
    plVar6 = plVar13 + 1;
    lVar18 = *plVar13;
    do {
      lVar15 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar15 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((lVar18 != 0) && (*(char *)(lVar18 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar18 + 8),plVar13,lVar15);
    }
    if (lVar15 < 1) {
                    /* try { // try from 0050fea0 to 0050fec7 has its CatchHandler @ 0050ff20 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar15 == 1) {
      (**(code **)(p_Var11 + 0x18))(*(undefined8 *)(p_Var11 + 0x20));
    }
  }
  plVar13 = (long *)(param_1 + 0x10);
  uStack_e8 = 0;
  uStack_d8 = 0;
  local_f0 = (__tree_node_base *)0x1;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  local_e0 = *(undefined8 *)(param_1 + 0x48);
  do {
    lVar18 = *plVar13;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar3) {
      *plVar13 = lVar18 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar15 = *(long *)(param_1 + 8);
  if ((lVar15 != 0) && (*(char *)(lVar15 + 0x10) != '\0')) {
                    /* try { // try from 0050fca8 to 0050fcdf has its CatchHandler @ 0050ff14 */
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x67,1,
                 "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar15 + 8),(long *)(param_1 + 8),
                 "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                 ,0x341,lVar18,lVar18 + 1,"ADS+OnRequestSentLocked");
  }
  local_58 = 0;
  FUN_0050f3a4(&local_58);
  *(undefined8 *)(param_1 + 0x68) = 0;
  puVar4 = PTR_LAB_04374a50;
  *(undefined2 *)(param_1 + 0x70) = 0;
  *(undefined **)(param_1 + 0x58) = puVar4;
  *(long *)(param_1 + 0x60) = param_1;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(char **)(param_1 + 0x78) =
       "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc";
  *(undefined4 *)(param_1 + 0x80) = 0x343;
                    /* try { // try from 0050fd1c to 0050fd27 has its CatchHandler @ 0050ff18 */
  iVar5 = FUN_003cba10(*(undefined8 *)(param_1 + 0x28),&local_f0,1,param_1 + 0x50);
  if (iVar5 != 0) {
                    /* try { // try from 0050fe50 to 0050fe97 has its CatchHandler @ 0050ff18 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                 ,0x347,2,"[xds_client %p] calld=%p call_error=%d sending ADS message",
                 *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18),param_1,iVar5);
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                 ,0x34a,2,"assertion failed: %s","GRPC_CALL_OK == call_error");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_005215f4(&local_98,local_90[0]);
  return;
}


