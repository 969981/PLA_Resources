/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00339e40; name: FUN_00339e40
 */


ulong FUN_00339e40(ulong *param_1,int param_2)

{
  ulong uVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  int *piVar5;
  ulong *puVar6;
  uint *puVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  byte *pbVar12;
  uint *puVar13;
  uint uVar14;
  ulong uVar15;
  code *pcVar16;
  uint uVar17;
  int iVar18;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [48];
  
  if (*(char *)((long)param_1 + 9) == '\0') {
    if ((*(byte *)((long)param_1 + 10) & 1) != 0) {
      return 0;
    }
    uVar15 = param_1[1];
    uVar17 = (uint)(byte)uVar15;
    uVar14 = uVar17 - 1;
    if (0x11 < uVar14) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x3c);
                    /* try { // try from 00339ff8 to 0033a00b has its CatchHandler @ 0033a944 */
      uVar4 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 0033a00c to 0033a013 has its CatchHandler @ 0033a940 */
      FUN_0030f41c(auStack_68,uVar4);
      FUN_0030f658(auStack_60);
      uVar17 = (uint)(byte)param_1[1];
      uVar14 = uVar17 - 1;
    }
    if (0x11 < (uVar14 & 0xff)) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x3c);
                    /* try { // try from 0033a050 to 0033a063 has its CatchHandler @ 0033a93c */
      uVar4 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 0033a064 to 0033a06b has its CatchHandler @ 0033a938 */
      FUN_0030f41c(auStack_68,uVar4);
      FUN_0030f658(auStack_60);
    }
    uVar14 = (((uint)LZCOUNT(param_2 << 3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) << ((byte)uVar15 == 10);
    uVar15 = (ulong)uVar14;
    switch(uVar17) {
    case 1:
    case 6:
    case 0x10:
      return uVar15 + 8;
    case 2:
    case 7:
    case 0xf:
      return uVar15 + 4;
    case 3:
    case 4:
      uVar11 = *param_1;
      break;
    case 5:
    case 0xe:
      uVar11 = 10;
      if (((uint)*param_1 & 0x80000000) == 0) {
        uVar11 = (ulong)(((uint)LZCOUNT((uint)*param_1 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      }
      return uVar11 + uVar15;
    case 8:
      return uVar15 + 1;
    case 9:
    case 0xc:
      bVar3 = *(byte *)*param_1;
      uVar11 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar11 = *(ulong *)((byte *)*param_1 + 8);
      }
      return uVar11 + uVar15 + (ulong)(((uint)LZCOUNT((uint)uVar11 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    case 10:
      lVar10 = (**(code **)(*(long *)*param_1 + 0x48))();
      return lVar10 + uVar15;
    case 0xb:
      if ((*(byte *)((long)param_1 + 10) >> 4 & 1) == 0) {
        pcVar16 = *(code **)(*(long *)*param_1 + 0x48);
      }
      else {
        pcVar16 = *(code **)(*(long *)*param_1 + 0x58);
      }
      lVar10 = (*pcVar16)();
      return lVar10 + uVar15 + (ulong)(((uint)LZCOUNT((uint)lVar10 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    case 0xd:
      uVar17 = (uint)*param_1;
      goto LAB_0033a8a4;
    case 0x11:
      uVar17 = (uint)*param_1 << 1 ^ (int)(uint)*param_1 >> 0x1f;
LAB_0033a8a4:
      return (ulong)(uVar14 + (((uint)LZCOUNT(uVar17 | 1) ^ 0x1f) * 9 + 0x49 >> 6));
    case 0x12:
      uVar11 = *param_1 << 1 ^ (long)*param_1 >> 0x3f;
      break;
    default:
      return uVar15;
    }
    return uVar15 + ((LZCOUNT(uVar11 | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
  }
  uVar15 = param_1[1];
  uVar14 = (byte)uVar15 - 1;
  cVar2 = *(char *)((long)param_1 + 0xb);
  if (0x11 < uVar14) {
    FUN_0030f640(auStack_60,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                 ,0x3c);
                    /* try { // try from 00339e8c to 00339e9f has its CatchHandler @ 0033a954 */
    uVar4 = FUN_0030f3ac(auStack_60,
                         "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 00339ea0 to 00339ea7 has its CatchHandler @ 0033a950 */
    FUN_0030f41c(auStack_68,uVar4);
    FUN_0030f658(auStack_60);
  }
  if (cVar2 != '\0') {
    switch(uVar14) {
    case 0:
    case 5:
    case 0xf:
      uVar15 = (ulong)*(uint *)*param_1 << 3;
      break;
    case 1:
    case 6:
    case 0xe:
      uVar15 = (ulong)*(uint *)*param_1 << 2;
      break;
    case 2:
      piVar8 = (int *)*param_1;
      if (*piVar8 < 1) goto switchD_00339ed0_default;
      uVar15 = 0;
      iVar18 = 0;
      do {
        puVar6 = (ulong *)FUN_003285d0(piVar8,iVar18);
        piVar8 = (int *)*param_1;
        uVar15 = uVar15 + ((LZCOUNT(*puVar6 | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
        iVar18 = iVar18 + 1;
      } while (iVar18 < *piVar8);
      break;
    case 3:
      piVar8 = (int *)*param_1;
      if (*piVar8 < 1) goto switchD_00339ed0_default;
      uVar15 = 0;
      iVar18 = 0;
      do {
        puVar6 = (ulong *)FUN_00329350(piVar8,iVar18);
        piVar8 = (int *)*param_1;
        uVar15 = uVar15 + ((LZCOUNT(*puVar6 | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
        iVar18 = iVar18 + 1;
      } while (iVar18 < *piVar8);
      break;
    case 4:
      piVar8 = (int *)*param_1;
      if (*piVar8 < 1) goto switchD_00339ed0_default;
      uVar15 = 0;
      iVar18 = 0;
      do {
        puVar7 = (uint *)FUN_00326ad0(piVar8,iVar18);
        piVar8 = (int *)*param_1;
        uVar11 = 10;
        if ((*puVar7 & 0x80000000) == 0) {
          uVar11 = (ulong)(((uint)LZCOUNT(*puVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
        }
        uVar15 = uVar11 + uVar15;
        iVar18 = iVar18 + 1;
      } while (iVar18 < *piVar8);
      break;
    case 7:
      uVar15 = (ulong)*(uint *)*param_1;
      break;
    case 8:
    case 9:
    case 10:
    case 0xb:
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x647);
                    /* try { // try from 00339eec to 00339eff has its CatchHandler @ 0033a934 */
      uVar4 = FUN_0030f3ac(auStack_60,"Non-primitive types can\'t be packed.");
                    /* try { // try from 00339f00 to 00339f07 has its CatchHandler @ 0033a930 */
      FUN_0030f41c(auStack_68,uVar4);
      FUN_0030f658(auStack_60);
    default:
switchD_00339ed0_default:
      *(uint *)((long)param_1 + 0xc) = 0;
      return 0;
    case 0xc:
      piVar8 = (int *)*param_1;
      if (*piVar8 < 1) goto switchD_00339ed0_default;
      uVar15 = 0;
      iVar18 = 0;
      do {
        puVar7 = (uint *)FUN_00327850(piVar8,iVar18);
        piVar8 = (int *)*param_1;
        uVar15 = uVar15 + (((uint)LZCOUNT(*puVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
        iVar18 = iVar18 + 1;
      } while (iVar18 < *piVar8);
      break;
    case 0xd:
      piVar8 = (int *)*param_1;
      if (*piVar8 < 1) goto switchD_00339ed0_default;
      uVar15 = 0;
      iVar18 = 0;
      do {
        puVar7 = (uint *)FUN_00326ad0(piVar8,iVar18);
        piVar8 = (int *)*param_1;
        uVar11 = 10;
        if ((*puVar7 & 0x80000000) == 0) {
          uVar11 = (ulong)(((uint)LZCOUNT(*puVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
        }
        uVar15 = uVar11 + uVar15;
        iVar18 = iVar18 + 1;
      } while (iVar18 < *piVar8);
      break;
    case 0x10:
      piVar8 = (int *)*param_1;
      if (*piVar8 < 1) goto switchD_00339ed0_default;
      uVar15 = 0;
      iVar18 = 0;
      do {
        piVar5 = (int *)FUN_00326ad0(piVar8,iVar18);
        piVar8 = (int *)*param_1;
        uVar15 = uVar15 + (((uint)LZCOUNT(*piVar5 << 1 ^ *piVar5 >> 0x1f | 1) ^ 0x1f) * 9 + 0x49 >>
                          6);
        iVar18 = iVar18 + 1;
      } while (iVar18 < *piVar8);
      break;
    case 0x11:
      piVar8 = (int *)*param_1;
      if (*piVar8 < 1) goto switchD_00339ed0_default;
      uVar15 = 0;
      iVar18 = 0;
      do {
        plVar9 = (long *)FUN_003285d0(piVar8,iVar18);
        piVar8 = (int *)*param_1;
        uVar15 = uVar15 + ((LZCOUNT(*plVar9 << 1 ^ *plVar9 >> 0x3f | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
        iVar18 = iVar18 + 1;
      } while (iVar18 < *piVar8);
    }
    *(uint *)((long)param_1 + 0xc) = (uint)uVar15;
    uVar11 = 0;
    if (uVar15 != 0) {
      uVar11 = uVar15 + (((uint)LZCOUNT(param_2 << 3 | 3) ^ 0x1f) * 9 + 0x49 >> 6) +
               (ulong)(((uint)LZCOUNT((uint)uVar15 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    }
    return uVar11;
  }
  if (0x11 < (byte)param_1[1] - 1) {
    FUN_0030f640(auStack_60,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                 ,0x3c);
                    /* try { // try from 00339f6c to 00339f7f has its CatchHandler @ 0033a94c */
    uVar4 = FUN_0030f3ac(auStack_60,
                         "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 00339f80 to 00339f87 has its CatchHandler @ 0033a948 */
    FUN_0030f41c(auStack_68,uVar4);
    FUN_0030f658(auStack_60);
    return 0;
  }
  uVar15 = (ulong)((((uint)LZCOUNT(param_2 << 3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) <<
                  ((byte)uVar15 == 10));
  switch((uint)(byte)param_1[1]) {
  default:
    lVar10 = uVar15 + 8;
    goto LAB_0033a54c;
  case 2:
  case 7:
  case 0xf:
    lVar10 = uVar15 + 4;
    goto LAB_0033a54c;
  case 3:
    puVar7 = (uint *)*param_1;
    uVar15 = *puVar7 * uVar15;
    if (0 < (int)*puVar7) {
      iVar18 = 0;
      do {
        puVar6 = (ulong *)FUN_003285d0(puVar7,iVar18);
        puVar7 = (uint *)*param_1;
        uVar15 = uVar15 + ((LZCOUNT(*puVar6 | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
        iVar18 = iVar18 + 1;
      } while (iVar18 < (int)*puVar7);
    }
    break;
  case 4:
    puVar7 = (uint *)*param_1;
    uVar15 = *puVar7 * uVar15;
    if (0 < (int)*puVar7) {
      iVar18 = 0;
      do {
        puVar6 = (ulong *)FUN_00329350(puVar7,iVar18);
        puVar7 = (uint *)*param_1;
        uVar15 = uVar15 + ((LZCOUNT(*puVar6 | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
        iVar18 = iVar18 + 1;
      } while (iVar18 < (int)*puVar7);
    }
    break;
  case 5:
    puVar7 = (uint *)*param_1;
    uVar15 = *puVar7 * uVar15;
    if (0 < (int)*puVar7) {
      iVar18 = 0;
      do {
        puVar13 = (uint *)FUN_00326ad0(puVar7,iVar18);
        puVar7 = (uint *)*param_1;
        uVar11 = 10;
        if ((*puVar13 & 0x80000000) == 0) {
          uVar11 = (ulong)(((uint)LZCOUNT(*puVar13 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
        }
        uVar15 = uVar11 + uVar15;
        iVar18 = iVar18 + 1;
      } while (iVar18 < (int)*puVar7);
    }
    break;
  case 8:
    lVar10 = uVar15 + 1;
LAB_0033a54c:
    uVar15 = lVar10 * (ulong)*(uint *)*param_1;
    break;
  case 9:
    uVar11 = *param_1;
    uVar15 = *(uint *)(uVar11 + 8) * uVar15;
    if (0 < (int)*(uint *)(uVar11 + 8)) {
      iVar18 = 0;
      do {
        pbVar12 = (byte *)FUN_0032b79c(uVar11,iVar18);
        uVar1 = (ulong)(*pbVar12 >> 1);
        if ((*pbVar12 & 1) != 0) {
          uVar1 = *(ulong *)(pbVar12 + 8);
        }
        uVar11 = *param_1;
        uVar15 = uVar1 + uVar15 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
        iVar18 = iVar18 + 1;
      } while (iVar18 < *(int *)(uVar11 + 8));
    }
    break;
  case 10:
    uVar11 = *param_1;
    uVar15 = *(uint *)(uVar11 + 8) * uVar15;
    if (0 < (int)*(uint *)(uVar11 + 8)) {
      iVar18 = 0;
      do {
        plVar9 = (long *)FUN_0033b104(uVar11,iVar18);
        lVar10 = (**(code **)(*plVar9 + 0x48))();
        uVar15 = lVar10 + uVar15;
        uVar11 = *param_1;
        iVar18 = iVar18 + 1;
      } while (iVar18 < *(int *)(uVar11 + 8));
    }
    break;
  case 0xb:
    uVar11 = *param_1;
    uVar15 = *(uint *)(uVar11 + 8) * uVar15;
    if (0 < (int)*(uint *)(uVar11 + 8)) {
      iVar18 = 0;
      do {
        plVar9 = (long *)FUN_0033b104(uVar11,iVar18);
        lVar10 = (**(code **)(*plVar9 + 0x48))();
        uVar11 = *param_1;
        uVar15 = lVar10 + uVar15 + (ulong)(((uint)LZCOUNT((uint)lVar10 | 1) ^ 0x1f) * 9 + 0x49 >> 6)
        ;
        iVar18 = iVar18 + 1;
      } while (iVar18 < *(int *)(uVar11 + 8));
    }
    break;
  case 0xc:
    uVar11 = *param_1;
    uVar15 = *(uint *)(uVar11 + 8) * uVar15;
    if (0 < (int)*(uint *)(uVar11 + 8)) {
      iVar18 = 0;
      do {
        pbVar12 = (byte *)FUN_0032b79c(uVar11,iVar18);
        uVar1 = (ulong)(*pbVar12 >> 1);
        if ((*pbVar12 & 1) != 0) {
          uVar1 = *(ulong *)(pbVar12 + 8);
        }
        uVar11 = *param_1;
        uVar15 = uVar1 + uVar15 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
        iVar18 = iVar18 + 1;
      } while (iVar18 < *(int *)(uVar11 + 8));
    }
    break;
  case 0xd:
    puVar7 = (uint *)*param_1;
    uVar15 = *puVar7 * uVar15;
    if (0 < (int)*puVar7) {
      iVar18 = 0;
      do {
        puVar13 = (uint *)FUN_00327850(puVar7,iVar18);
        puVar7 = (uint *)*param_1;
        uVar15 = uVar15 + (((uint)LZCOUNT(*puVar13 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
        iVar18 = iVar18 + 1;
      } while (iVar18 < (int)*puVar7);
    }
    break;
  case 0xe:
    puVar7 = (uint *)*param_1;
    uVar15 = *puVar7 * uVar15;
    if (0 < (int)*puVar7) {
      iVar18 = 0;
      do {
        puVar13 = (uint *)FUN_00326ad0(puVar7,iVar18);
        puVar7 = (uint *)*param_1;
        uVar11 = 10;
        if ((*puVar13 & 0x80000000) == 0) {
          uVar11 = (ulong)(((uint)LZCOUNT(*puVar13 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
        }
        uVar15 = uVar11 + uVar15;
        iVar18 = iVar18 + 1;
      } while (iVar18 < (int)*puVar7);
    }
    break;
  case 0x11:
    puVar7 = (uint *)*param_1;
    uVar15 = *puVar7 * uVar15;
    if (0 < (int)*puVar7) {
      iVar18 = 0;
      do {
        piVar8 = (int *)FUN_00326ad0(puVar7,iVar18);
        puVar7 = (uint *)*param_1;
        uVar15 = uVar15 + (((uint)LZCOUNT(*piVar8 << 1 ^ *piVar8 >> 0x1f | 1) ^ 0x1f) * 9 + 0x49 >>
                          6);
        iVar18 = iVar18 + 1;
      } while (iVar18 < (int)*puVar7);
    }
    break;
  case 0x12:
    puVar7 = (uint *)*param_1;
    uVar15 = *puVar7 * uVar15;
    if (0 < (int)*puVar7) {
      iVar18 = 0;
      do {
        plVar9 = (long *)FUN_003285d0(puVar7,iVar18);
        puVar7 = (uint *)*param_1;
        uVar15 = uVar15 + ((LZCOUNT(*plVar9 << 1 ^ *plVar9 >> 0x3f | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
        iVar18 = iVar18 + 1;
      } while (iVar18 < (int)*puVar7);
    }
  }
  return uVar15;
}


