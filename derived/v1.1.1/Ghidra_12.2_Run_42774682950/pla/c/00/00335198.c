/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00335198; name: FUN_00335198
 */


void FUN_00335198(long *param_1,undefined4 param_2,long *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  ulong *puVar8;
  long lVar9;
  code *pcVar10;
  int *piVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  void *__src;
  void *__dest;
  ulong uVar16;
  undefined1 auVar17 [16];
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  undefined1 auStack_80 [48];
  undefined1 auStack_48 [8];
  
  if (*(char *)((long)param_3 + 9) != '\0') {
    lVar13 = param_3[2];
    auVar17 = FUN_00335f6c(param_1,param_2);
    uVar14 = auVar17._8_8_;
    plVar7 = auVar17._0_8_;
    plVar7[2] = lVar13;
    if ((uVar14 & 0xff) == 0) {
      if ((char)plVar7[1] != (char)param_3[1]) {
        FUN_0030f640(auStack_80,3,
                     "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                     ,0x3ab);
                    /* try { // try from 003352d0 to 003352e3 has its CatchHandler @ 00335d3c */
        uVar4 = FUN_0030f3ac(auStack_80,
                             "CHECK failed: (extension->type) == (other_extension.type): ");
                    /* try { // try from 003352e4 to 003352eb has its CatchHandler @ 00335d38 */
        FUN_0030f41c(auStack_48,uVar4);
        FUN_0030f658(auStack_80);
      }
      if (*(char *)((long)plVar7 + 0xb) != *(char *)((long)param_3 + 0xb)) {
        FUN_0030f640(auStack_80,3,
                     "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                     ,0x3ac);
                    /* try { // try from 0033531c to 0033532f has its CatchHandler @ 00335d34 */
        uVar4 = FUN_0030f3ac(auStack_80,
                             "CHECK failed: (extension->is_packed) == (other_extension.is_packed): "
                            );
                    /* try { // try from 00335330 to 00335337 has its CatchHandler @ 00335d30 */
        FUN_0030f41c(auStack_48,uVar4);
        FUN_0030f658(auStack_80);
      }
      if (*(char *)((long)plVar7 + 9) == '\0') {
        FUN_0030f640(auStack_80,3,
                     "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                     ,0x3ad);
                    /* try { // try from 00335360 to 00335373 has its CatchHandler @ 00335d24 */
        uVar4 = FUN_0030f3ac(auStack_80,"CHECK failed: extension->is_repeated: ");
                    /* try { // try from 00335374 to 0033537b has its CatchHandler @ 00335d20 */
        FUN_0030f41c(auStack_48,uVar4);
        FUN_0030f658(auStack_80);
      }
    }
    else {
      *(char *)(plVar7 + 1) = (char)param_3[1];
      *(undefined1 *)((long)plVar7 + 0xb) = *(undefined1 *)((long)param_3 + 0xb);
      *(undefined1 *)((long)plVar7 + 9) = 1;
    }
    bVar1 = *(byte *)(param_3 + 1);
    if (0x11 < (byte)(bVar1 - 1)) {
      FUN_0030f640(auStack_80,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x3c);
                    /* try { // try from 003353b0 to 003353c3 has its CatchHandler @ 00335d44 */
      uVar4 = FUN_0030f3ac(auStack_80,
                           "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 003353c4 to 003353cb has its CatchHandler @ 00335d40 */
      FUN_0030f41c(auStack_48,uVar4);
      FUN_0030f658(auStack_80);
    }
    switch(*(undefined4 *)(PTR_DAT_04373b08 + (ulong)bVar1 * 4)) {
    case 1:
    case 8:
      if ((uVar14 & 0xff) != 0) {
        lVar13 = *param_1;
        if (lVar13 == 0) {
          puVar5 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x10);
          if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = 0;
            puVar5[1] = 0;
          }
        }
        else {
          if (*(long *)(lVar13 + 0x70) != 0) {
            FUN_0032cf88(lVar13,0,0x10);
          }
          puVar5 = (undefined8 *)FUN_0032c850(lVar13,0x10,PTR_LAB_04373b10);
          *puVar5 = 0;
          puVar5[1] = lVar13;
        }
        *plVar7 = (long)puVar5;
      }
      FUN_00326f44(*plVar7,*param_3);
      return;
    case 2:
      if ((uVar14 & 0xff) != 0) {
        lVar13 = *param_1;
        if (lVar13 == 0) {
          puVar5 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x10);
          if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = 0;
            puVar5[1] = 0;
          }
        }
        else {
          if (*(long *)(lVar13 + 0x70) != 0) {
            FUN_0032cf88(lVar13,0,0x10);
          }
          puVar5 = (undefined8 *)FUN_0032c850(lVar13,0x10,PTR_LAB_04373b18);
          *puVar5 = 0;
          puVar5[1] = lVar13;
        }
        *plVar7 = (long)puVar5;
      }
      FUN_00328a44(*plVar7,*param_3);
      return;
    case 3:
      if ((uVar14 & 0xff) != 0) {
        lVar13 = *param_1;
        if (lVar13 == 0) {
          puVar5 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x10);
          if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = 0;
            puVar5[1] = 0;
          }
        }
        else {
          if (*(long *)(lVar13 + 0x70) != 0) {
            FUN_0032cf88(lVar13,0,0x10);
          }
          puVar5 = (undefined8 *)FUN_0032c850(lVar13,0x10,PTR_LAB_04373b20);
          *puVar5 = 0;
          puVar5[1] = lVar13;
        }
        *plVar7 = (long)puVar5;
      }
      FUN_00327cc4(*plVar7,*param_3);
      return;
    case 4:
      if ((uVar14 & 0xff) != 0) {
        lVar13 = *param_1;
        if (lVar13 == 0) {
          puVar5 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x10);
          if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = 0;
            puVar5[1] = 0;
          }
        }
        else {
          if (*(long *)(lVar13 + 0x70) != 0) {
            FUN_0032cf88(lVar13,0,0x10);
          }
          puVar5 = (undefined8 *)FUN_0032c850(lVar13,0x10,PTR_LAB_04373b28);
          *puVar5 = 0;
          puVar5[1] = lVar13;
        }
        *plVar7 = (long)puVar5;
      }
      FUN_003297c4(*plVar7,*param_3);
      return;
    case 5:
      if ((uVar14 & 0xff) != 0) {
        lVar13 = *param_1;
        if (lVar13 == 0) {
          puVar5 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x10);
          if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = 0;
            puVar5[1] = 0;
          }
        }
        else {
          if (*(long *)(lVar13 + 0x70) != 0) {
            FUN_0032cf88(lVar13,0,0x10);
          }
          puVar5 = (undefined8 *)FUN_0032c850(lVar13,0x10,PTR_LAB_04373b38);
          *puVar5 = 0;
          puVar5[1] = lVar13;
        }
        *plVar7 = (long)puVar5;
      }
      FUN_0032b2c4(*plVar7,*param_3);
      return;
    case 6:
      if ((uVar14 & 0xff) != 0) {
        lVar13 = *param_1;
        if (lVar13 == 0) {
          puVar5 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x10);
          if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = 0;
            puVar5[1] = 0;
          }
        }
        else {
          if (*(long *)(lVar13 + 0x70) != 0) {
            FUN_0032cf88(lVar13,0,0x10);
          }
          puVar5 = (undefined8 *)FUN_0032c850(lVar13,0x10,PTR_LAB_04373b30);
          *puVar5 = 0;
          puVar5[1] = lVar13;
        }
        *plVar7 = (long)puVar5;
      }
      FUN_0032a544(*plVar7,*param_3);
      return;
    case 7:
      if ((uVar14 & 0xff) != 0) {
        lVar13 = *param_1;
        if (lVar13 == 0) {
          puVar5 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x10);
          if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = 0;
            puVar5[1] = 0;
          }
        }
        else {
          if (*(long *)(lVar13 + 0x70) != 0) {
            FUN_0032cf88(lVar13,0,0x10);
          }
          puVar5 = (undefined8 *)FUN_0032c850(lVar13,0x10,PTR_LAB_04373b40);
          *puVar5 = 0;
          puVar5[1] = lVar13;
        }
        *plVar7 = (long)puVar5;
      }
      FUN_003261cc(*plVar7,*param_3);
      return;
    case 9:
      if ((uVar14 & 0xff) != 0) {
        lVar13 = *param_1;
        if (lVar13 == 0) {
          plVar6 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x18);
          if (plVar6 != (long *)0x0) {
            *plVar6 = 0;
            plVar6[1] = 0;
            plVar6[2] = 0;
          }
        }
        else {
          if (*(long *)(lVar13 + 0x70) != 0) {
            FUN_0032cf88(lVar13,0,0x18);
          }
          plVar6 = (long *)FUN_0032c850(lVar13,0x18,PTR_LAB_04373b48);
          plVar6[1] = 0;
          plVar6[2] = 0;
          *plVar6 = lVar13;
        }
        *plVar7 = (long)plVar6;
      }
      FUN_0032ba34(*plVar7,*param_3);
      return;
    case 10:
      goto switchD_00335400_caseD_a;
    default:
      return;
    }
  }
  if ((*(byte *)((long)param_3 + 10) & 1) != 0) {
    return;
  }
  bVar1 = *(byte *)(param_3 + 1);
  if (0x11 < (byte)(bVar1 - 1)) {
    FUN_0030f640(auStack_80,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                 ,0x3c);
                    /* try { // try from 00335238 to 0033524b has its CatchHandler @ 00335d2c */
    uVar4 = FUN_0030f3ac(auStack_80,
                         "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 0033524c to 00335253 has its CatchHandler @ 00335d28 */
    FUN_0030f41c(auStack_48,uVar4);
    FUN_0030f658(auStack_80);
  }
  switch(*(undefined4 *)(PTR_DAT_04373b08 + (ulong)bVar1 * 4)) {
  case 1:
    FUN_0032e738(param_1,param_2,(char)param_3[1],(int)*param_3,param_3[2]);
    break;
  case 2:
    FUN_0032f0f0(param_1,param_2,(char)param_3[1],*param_3,param_3[2]);
    break;
  case 3:
    FUN_0032fa78(param_1,param_2,(char)param_3[1],(int)*param_3,param_3[2]);
    break;
  case 4:
    FUN_00330400(param_1,param_2,(char)param_3[1],*param_3,param_3[2]);
    break;
  case 5:
    FUN_00331708(*param_3,param_1,param_2,(char)param_3[1],param_3[2]);
    break;
  case 6:
    FUN_00330d84((int)*param_3,param_1,param_2,(char)param_3[1],param_3[2]);
    break;
  case 7:
    FUN_00332098(param_1,param_2,(char)param_3[1],(char)*param_3,param_3[2]);
    break;
  case 8:
    FUN_00332cc8(param_1,param_2,(char)param_3[1],(int)*param_3,param_3[2]);
    break;
  case 9:
    puVar8 = (ulong *)*param_3;
    lVar13 = param_3[1];
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = (void *)0x0;
    if ((*puVar8 & 1) == 0) {
      uStack_98 = puVar8[1];
      local_a0 = *puVar8;
      local_90 = (void *)puVar8[2];
    }
    else {
      uVar14 = puVar8[1];
      if (0xffffffffffffffef < uVar14) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      __src = (void *)puVar8[2];
      if (uVar14 < 0x17) {
        local_a0 = (ulong)(byte)((int)uVar14 << 1);
        __dest = (void *)((ulong)&local_a0 | 1);
        if (uVar14 != 0) goto LAB_00335b2c;
      }
      else {
        uVar16 = uVar14 + 0x10 & 0xfffffffffffffff0;
        __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar16);
        local_a0 = uVar16 | 1;
        uStack_98 = uVar14;
        local_90 = __dest;
LAB_00335b2c:
        memcpy(__dest,__src,uVar14);
      }
      *(undefined1 *)((long)__dest + uVar14) = 0;
    }
                    /* try { // try from 00335b44 to 00335b53 has its CatchHandler @ 00335cfc */
    puVar8 = (ulong *)FUN_00333650(param_1,param_2,(char)lVar13,param_3[2]);
    if ((*puVar8 & 1) == 0) {
      *(undefined2 *)puVar8 = 0;
    }
    else {
      *(undefined1 *)puVar8[2] = 0;
      puVar8[1] = 0;
      if ((*puVar8 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,puVar8[2]);
        *puVar8 = 0;
      }
    }
    puVar8[2] = (ulong)local_90;
    puVar8[1] = uStack_98;
    *puVar8 = local_a0;
    break;
  case 10:
    lVar13 = param_3[2];
    auVar17 = FUN_00335f6c(param_1,param_2);
    puVar5 = auVar17._0_8_;
    puVar5[2] = lVar13;
    if ((auVar17._8_8_ & 0xff) == 0) {
      if (*(char *)(puVar5 + 1) != (char)param_3[1]) {
        FUN_0030f640(auStack_80,3,
                     "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                     ,0x40a);
                    /* try { // try from 00335a04 to 00335a17 has its CatchHandler @ 00335cf0 */
        uVar4 = FUN_0030f3ac(auStack_80,
                             "CHECK failed: (extension->type) == (other_extension.type): ");
                    /* try { // try from 00335a18 to 00335a1f has its CatchHandler @ 00335cec */
        FUN_0030f41c(auStack_48,uVar4);
        FUN_0030f658(auStack_80);
      }
      if (*(char *)((long)puVar5 + 0xb) != *(char *)((long)param_3 + 0xb)) {
        FUN_0030f640(auStack_80,3,
                     "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                     ,0x40b);
                    /* try { // try from 00335a50 to 00335a63 has its CatchHandler @ 00335ce8 */
        uVar4 = FUN_0030f3ac(auStack_80,
                             "CHECK failed: (extension->is_packed) == (other_extension.is_packed): "
                            );
                    /* try { // try from 00335a64 to 00335a6b has its CatchHandler @ 00335ce4 */
        FUN_0030f41c(auStack_48,uVar4);
        FUN_0030f658(auStack_80);
      }
      if (*(char *)((long)puVar5 + 9) != '\0') {
        FUN_0030f640(auStack_80,3,
                     "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                     ,0x40c);
                    /* try { // try from 00335a94 to 00335aa7 has its CatchHandler @ 00335cf8 */
        uVar4 = FUN_0030f3ac(auStack_80,"CHECK failed: !extension->is_repeated: ");
                    /* try { // try from 00335aa8 to 00335aaf has its CatchHandler @ 00335cf4 */
        FUN_0030f41c(auStack_48,uVar4);
        FUN_0030f658(auStack_80);
      }
      if ((*(byte *)((long)param_3 + 10) >> 4 & 1) == 0) {
        if ((*(byte *)((long)puVar5 + 10) >> 4 & 1) == 0) {
          plVar7 = (long *)*puVar5;
        }
        else {
          plVar7 = (long *)(**(code **)(*(long *)*puVar5 + 0x20))((long *)*puVar5,*param_3);
        }
        goto LAB_00335bc8;
      }
      if ((*(byte *)((long)puVar5 + 10) >> 4 & 1) != 0) {
        plVar7 = (long *)*puVar5;
        goto LAB_00335bb4;
      }
      plVar7 = (long *)*puVar5;
      lVar13 = (**(code **)(*(long *)*param_3 + 0x18))((long *)*param_3,plVar7);
      lVar9 = *plVar7;
LAB_00335bd0:
      pcVar10 = *(code **)(lVar9 + 0x40);
    }
    else {
      *(char *)(puVar5 + 1) = (char)param_3[1];
      *(undefined1 *)((long)puVar5 + 0xb) = *(undefined1 *)((long)param_3 + 0xb);
      *(undefined1 *)((long)puVar5 + 9) = 0;
      bVar1 = *(byte *)((long)puVar5 + 10) & 0xf;
      if ((*(byte *)((long)param_3 + 10) >> 4 & 1) == 0) {
        *(byte *)((long)puVar5 + 10) = bVar1;
        plVar7 = (long *)(**(code **)(*(long *)*param_3 + 0x20))((long *)*param_3,*param_1);
        *puVar5 = plVar7;
LAB_00335bc8:
        lVar9 = *plVar7;
        lVar13 = *param_3;
        goto LAB_00335bd0;
      }
      *(byte *)((long)puVar5 + 10) = bVar1 | 0x10;
      plVar7 = (long *)(**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,*param_1);
      *puVar5 = plVar7;
LAB_00335bb4:
      lVar13 = *param_3;
      pcVar10 = *(code **)(*plVar7 + 0x68);
    }
    (*pcVar10)(plVar7,lVar13);
    *(byte *)((long)puVar5 + 10) = *(byte *)((long)puVar5 + 10) & 0xf0;
  }
  return;
switchD_00335400_caseD_a:
  if ((uVar14 & 0xff) != 0) {
    lVar13 = *param_1;
    if (lVar13 == 0) {
      plVar6 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x18);
      if (plVar6 != (long *)0x0) {
        *plVar6 = 0;
        plVar6[1] = 0;
        plVar6[2] = 0;
      }
    }
    else {
      if (*(long *)(lVar13 + 0x70) != 0) {
        FUN_0032cf88(lVar13,0,0x18);
      }
      plVar6 = (long *)FUN_0032c850(lVar13,0x18,PTR_LAB_04373b50);
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = lVar13;
    }
    *plVar7 = (long)plVar6;
  }
  lVar13 = *param_3;
  if (*(int *)(lVar13 + 8) < 1) {
    return;
  }
  iVar12 = 0;
  do {
    plVar6 = (long *)FUN_0033b104(lVar13,iVar12);
    lVar9 = *plVar7;
    piVar11 = *(int **)(lVar9 + 0x10);
    if (piVar11 == (int *)0x0) {
LAB_00335830:
      plVar15 = (long *)(**(code **)(*plVar6 + 0x20))(plVar6,*param_1);
      lVar9 = *plVar7;
      piVar11 = *(int **)(lVar9 + 0x10);
      if (piVar11 != (int *)0x0) {
        iVar2 = *piVar11;
        if (iVar2 < *(int *)(lVar9 + 0xc)) {
          iVar3 = *(int *)(lVar9 + 8);
          if (iVar3 < iVar2) {
            *(undefined8 *)(piVar11 + (long)iVar2 * 2 + 2) =
                 *(undefined8 *)(piVar11 + (long)iVar3 * 2 + 2);
          }
          *(long **)(piVar11 + (long)iVar3 * 2 + 2) = plVar15;
          *(int *)(lVar9 + 8) = iVar3 + 1;
          **(int **)(lVar9 + 0x10) = **(int **)(lVar9 + 0x10) + 1;
          goto LAB_003357cc;
        }
      }
      FUN_0033b2d4(lVar9,plVar15);
    }
    else {
      iVar2 = *(int *)(lVar9 + 8);
      if (*piVar11 <= iVar2) goto LAB_00335830;
      *(int *)(lVar9 + 8) = iVar2 + 1;
      plVar15 = *(long **)(piVar11 + (long)iVar2 * 2 + 2);
      if (plVar15 == (long *)0x0) goto LAB_00335830;
    }
LAB_003357cc:
    (**(code **)(*plVar15 + 0x40))(plVar15,plVar6);
    iVar12 = iVar12 + 1;
    if (*(int *)(lVar13 + 8) <= iVar12) {
      return;
    }
  } while( true );
}


