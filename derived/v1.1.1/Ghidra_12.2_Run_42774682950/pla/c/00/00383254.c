/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00383254; name: FUN_00383254
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00383254(long *param_1,long *param_2,long *param_3,undefined8 param_4,ulong param_5,
                 ulong param_6,ulong param_7,ulong param_8)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  undefined8 uVar21;
  long lVar22;
  long *plVar23;
  undefined8 *puVar24;
  long *extraout_x1;
  long *extraout_x1_00;
  ulong *puVar25;
  ulong uVar26;
  long *plVar27;
  uint uVar28;
  int iVar29;
  ulong uVar30;
  long lVar31;
  ulong uVar32;
  ulong *puVar33;
  ulong uVar34;
  ulong uVar35;
  long lVar36;
  uint uVar37;
  ulong uVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  ulong uVar42;
  uint uVar43;
  ulong uVar44;
  long lVar45;
  ulong *puVar46;
  ulong *unaff_x29;
  undefined8 *puVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [48];
  
  if (param_2 == param_3) {
    return;
  }
  (**(code **)(*param_2 + 0x98))(param_2);
  if (extraout_x1 != param_1) {
    FUN_0030f640(auStack_90,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/generated_message_reflection.cc"
                 ,0x255);
                    /* try { // try from 003832b4 to 00383317 has its CatchHandler @ 00383a58 */
    uVar21 = FUN_0030f3ac(auStack_90,"CHECK failed: (message1->GetReflection()) == (this): ");
    uVar21 = FUN_0030f3ac(uVar21,"First argument to Swap() (of type \"");
    lVar22 = (**(code **)(*param_2 + 0x98))(param_2);
    uVar21 = FUN_0030f3e8(uVar21,*(undefined8 *)(lVar22 + 8));
    uVar21 = FUN_0030f3ac(uVar21,
                          "\") is not compatible with this reflection object (which is for type \"")
    ;
    uVar21 = FUN_0030f3e8(uVar21,*(undefined8 *)(*param_1 + 8));
    uVar21 = FUN_0030f3ac(uVar21,
                          "\").  Note that the exact same class is required; not just the same descriptor."
                         );
                    /* try { // try from 00383318 to 0038331f has its CatchHandler @ 00383a50 */
    FUN_0030f41c(auStack_98,uVar21);
    FUN_0030f658(auStack_90);
  }
  (**(code **)(*param_3 + 0x98))(param_3);
  if (extraout_x1_00 != param_1) {
    FUN_0030f640(auStack_90,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/generated_message_reflection.cc"
                 ,0x25d);
                    /* try { // try from 00383358 to 003833bb has its CatchHandler @ 00383a54 */
    uVar21 = FUN_0030f3ac(auStack_90,"CHECK failed: (message2->GetReflection()) == (this): ");
    uVar21 = FUN_0030f3ac(uVar21,"Second argument to Swap() (of type \"");
    lVar22 = (**(code **)(*param_3 + 0x98))(param_3);
    uVar21 = FUN_0030f3e8(uVar21,*(undefined8 *)(lVar22 + 8));
    uVar21 = FUN_0030f3ac(uVar21,
                          "\") is not compatible with this reflection object (which is for type \"")
    ;
    uVar21 = FUN_0030f3e8(uVar21,*(undefined8 *)(*param_1 + 8));
    uVar21 = FUN_0030f3ac(uVar21,
                          "\").  Note that the exact same class is required; not just the same descriptor."
                         );
                    /* try { // try from 003833bc to 003833c3 has its CatchHandler @ 00383a4c */
    FUN_0030f41c(auStack_98,uVar21);
    FUN_0030f658(auStack_90);
  }
  uVar32 = (ulong)*(uint *)((long)param_1 + 0x24);
  uVar26 = *(ulong *)((long)param_2 + uVar32);
  puVar25 = (ulong *)(uVar26 & 0xfffffffffffffffe);
  if ((uVar26 & 1) == 0) {
    puVar33 = (ulong *)(*(ulong *)((long)param_3 + uVar32) & 0xfffffffffffffffe);
    puVar46 = puVar25;
    if ((*(ulong *)((long)param_3 + uVar32) & 1) != 0) goto LAB_0038348c;
LAB_003833ec:
    if (puVar46 != puVar33) goto LAB_003833f4;
  }
  else {
    puVar46 = (ulong *)*puVar25;
    puVar33 = (ulong *)(*(ulong *)((long)param_3 + uVar32) & 0xfffffffffffffffe);
    if ((*(ulong *)((long)param_3 + uVar32) & 1) == 0) goto LAB_003833ec;
LAB_0038348c:
    if (puVar46 != (ulong *)*puVar33) {
LAB_003833f4:
      if ((uVar26 & 1) != 0) {
        puVar25 = (ulong *)*puVar25;
      }
      plVar23 = (long *)(**(code **)(*param_2 + 0x20))(param_2,puVar25);
      (**(code **)(*plVar23 + 0x78))(plVar23,param_3);
      (**(code **)(*param_3 + 0x70))(param_3,param_2);
      FUN_00383254(param_1,param_2,plVar23);
      uVar26 = *(ulong *)((long)param_2 + (ulong)*(uint *)((long)param_1 + 0x24));
      plVar27 = (long *)(uVar26 & 0xfffffffffffffffe);
      if ((uVar26 & 1) != 0) {
        plVar27 = (long *)*plVar27;
      }
      if ((plVar23 != (long *)0x0) && (plVar27 == (long *)0x0)) {
        (**(code **)*plVar23)(plVar23);
        FUN_002e2ea0(PTR_LAB_04373088,plVar23);
      }
      return;
    }
  }
  if ((int)param_1[4] == -1) {
    lVar22 = *param_1;
    iVar29 = (int)param_1[9];
    goto joined_r0x003834f4;
  }
  uVar26 = FUN_003865a8(param_1,param_2);
  puVar47 = (undefined8 *)0x3834c0;
  uVar32 = FUN_003865a8(param_1,param_3);
  lVar22 = *param_1;
  uVar28 = *(uint *)(lVar22 + 0x68);
  uVar42 = (ulong)(int)uVar28;
  if (0 < (int)uVar28) {
    if (uVar28 < 4) {
      uVar34 = 0;
      iVar29 = 0;
LAB_00383798:
      piVar1 = (int *)(*(long *)(lVar22 + 0x28) + uVar34 * 0x98 + 0x3c);
      iVar40 = *piVar1;
      while( true ) {
        if ((iVar40 != 3) &&
           ((lVar31 = *(long *)(piVar1 + 7), lVar31 == 0 ||
            ((*(int *)(lVar31 + 0x18) == 1 && (*(char *)(**(long **)(lVar31 + 0x20) + 0x41) != '\0')
             ))))) {
          iVar29 = iVar29 + 1;
        }
        uVar34 = uVar34 + 1;
        piVar1 = piVar1 + 0x26;
        if ((long)uVar42 <= (long)uVar34) break;
        iVar40 = *piVar1;
      }
    }
    else {
      uVar34 = uVar42 & 0xfffffffffffffffc;
      iVar40 = 0;
      iVar41 = 0;
      iVar39 = 0;
      iVar29 = 0;
      lVar31 = *(long *)(lVar22 + 0x28);
      uVar35 = uVar34;
      do {
        iVar2 = *(int *)(lVar31 + 0x3c);
        iVar3 = *(int *)(lVar31 + 0xd4);
        iVar4 = *(int *)(lVar31 + 0x16c);
        iVar5 = *(int *)(lVar31 + 0x204);
        if (iVar2 != 3) {
          param_5 = *(ulong *)(lVar31 + 0x58);
        }
        if (iVar3 != 3) {
          param_6 = *(ulong *)(lVar31 + 0xf0);
        }
        if (iVar4 != 3) {
          param_7 = *(ulong *)(lVar31 + 0x188);
        }
        if (iVar5 != 3) {
          param_8 = *(ulong *)(lVar31 + 0x220);
        }
        bVar9 = iVar5 != 3;
        uVar37 = (uint)bVar9;
        bVar10 = iVar4 != 3;
        uVar28 = (uint)bVar10;
        bVar11 = iVar3 != 3;
        bVar12 = iVar2 != 3;
        bVar13 = param_5 != 0;
        bVar14 = param_6 != 0;
        bVar15 = param_7 != 0;
        puVar25 = (ulong *)(ulong)bVar15;
        bVar16 = param_8 != 0;
        uVar43 = (uint)bVar16;
        if (bVar12 && bVar13) {
          uVar28 = *(uint *)(param_5 + 0x18);
        }
        if (bVar11 && bVar14) {
          uVar37 = *(uint *)(param_6 + 0x18);
        }
        if (bVar10 && bVar15) {
          uVar43 = *(uint *)(param_7 + 0x18);
        }
        bVar8 = bVar9 && bVar16;
        if (bVar8) {
          puVar25 = (ulong *)(ulong)*(uint *)(param_8 + 0x18);
        }
        bVar17 = uVar28 == 1;
        puVar46 = (ulong *)(ulong)bVar17;
        bVar18 = uVar37 == 1;
        uVar38 = (ulong)bVar18;
        bVar19 = uVar43 == 1;
        uVar44 = (ulong)bVar19;
        bVar20 = (int)puVar25 == 1;
        bVar7 = bVar17 && (bVar12 && bVar13);
        uVar30 = (ulong)bVar20;
        if (bVar7) {
          puVar25 = *(ulong **)(param_5 + 0x20);
        }
        if (bVar18 && (bVar11 && bVar14)) {
          puVar46 = *(ulong **)(param_6 + 0x20);
        }
        if (bVar19 && (bVar10 && bVar15)) {
          unaff_x29 = *(ulong **)(param_7 + 0x20);
        }
        if (bVar20 && (bVar9 && bVar16)) {
          puVar47 = *(undefined8 **)(param_8 + 0x20);
        }
        if (bVar17 && (bVar12 && bVar13)) {
          uVar38 = *puVar25;
        }
        if (bVar18 && (bVar11 && bVar14)) {
          uVar30 = *puVar46;
        }
        if (bVar19 && (bVar10 && bVar15)) {
          uVar44 = *unaff_x29;
        }
        if (bVar20 && (bVar9 && bVar16)) {
          unaff_x29 = (ulong *)*puVar47;
        }
        if (bVar17 && (bVar12 && bVar13)) {
          puVar25 = (ulong *)(ulong)*(byte *)(uVar38 + 0x41);
        }
        if (bVar18 && (bVar11 && bVar14)) {
          puVar46 = (ulong *)(ulong)*(byte *)(uVar30 + 0x41);
        }
        if (bVar19 && (bVar10 && bVar15)) {
          uVar30 = (ulong)*(byte *)(uVar44 + 0x41);
        }
        if (bVar20 && bVar8) {
          uVar38 = (ulong)*(byte *)((long)unaff_x29 + 0x41);
        }
        bVar9 = param_8 == 0;
        param_8 = (ulong)bVar9;
        bVar12 = param_7 == 0;
        param_7 = (ulong)bVar12;
        bVar13 = param_6 == 0;
        param_6 = (ulong)bVar13;
        bVar16 = param_5 == 0;
        param_5 = (ulong)bVar16;
        iVar40 = iVar40 + (uint)(bVar16 && iVar2 != 3 || bVar7 && ((ulong)puVar25 & 0xff) != 0);
        iVar41 = iVar41 + (uint)(bVar13 && iVar3 != 3 ||
                                (bVar18 && (bVar11 && bVar14)) && ((ulong)puVar46 & 0xff) != 0);
        iVar39 = iVar39 + (uint)(bVar12 && iVar4 != 3 ||
                                (bVar19 && (bVar10 && bVar15)) && (uVar30 & 0xff) != 0);
        iVar29 = iVar29 + (uint)(bVar9 && iVar5 != 3 || (bVar20 && bVar8) && (uVar38 & 0xff) != 0);
        uVar35 = uVar35 - 4;
        lVar31 = lVar31 + 0x260;
      } while (uVar35 != 0);
      iVar29 = iVar29 + iVar39 + iVar41 + iVar40;
      if (uVar34 != uVar42) goto LAB_00383798;
    }
    if (0 < iVar29) {
      uVar28 = iVar29 + 0x3e;
      if (-1 < (int)(iVar29 + 0x1fU)) {
        uVar28 = iVar29 + 0x1fU;
      }
      uVar34 = (long)((ulong)uVar28 << 0x20) >> 0x25;
      uVar42 = uVar34;
      if ((long)uVar34 < 2) {
        uVar42 = 1;
      }
      if (uVar42 < 8) {
LAB_0038384c:
        uVar35 = 0;
      }
      else {
        uVar35 = uVar34;
        if ((long)uVar34 < 2) {
          uVar35 = 1;
        }
        if ((uVar26 < uVar32 + uVar35 * 4) && (uVar32 < uVar26 + uVar35 * 4)) goto LAB_0038384c;
        uVar35 = uVar42 & 0x7ffffffffffffff8;
        puVar47 = (undefined8 *)(uVar32 + 0x10);
        puVar24 = (undefined8 *)(uVar26 + 0x10);
        uVar30 = uVar35;
        do {
          uVar49 = puVar47[-2];
          uVar52 = puVar47[1];
          uVar51 = *puVar47;
          uVar30 = uVar30 - 8;
          uVar48 = puVar24[-1];
          uVar21 = puVar24[-2];
          puVar24[-1] = puVar47[-1];
          puVar24[-2] = uVar49;
          uVar50 = puVar24[1];
          uVar49 = *puVar24;
          puVar24[1] = uVar52;
          *puVar24 = uVar51;
          puVar47[-1] = uVar48;
          puVar47[-2] = uVar21;
          puVar47[1] = uVar50;
          *puVar47 = uVar49;
          puVar47 = puVar47 + 4;
          puVar24 = puVar24 + 4;
        } while (uVar30 != 0);
        if (uVar42 == uVar35) goto LAB_00383870;
      }
      do {
        lVar31 = uVar35 * 4;
        uVar35 = uVar35 + 1;
        uVar6 = *(undefined4 *)(uVar26 + lVar31);
        *(undefined4 *)(uVar26 + lVar31) = *(undefined4 *)(uVar32 + lVar31);
        *(undefined4 *)(uVar32 + lVar31) = uVar6;
      } while ((long)uVar35 < (long)uVar34);
    }
  }
LAB_00383870:
  iVar29 = (int)param_1[9];
joined_r0x003834f4:
  if (iVar29 < 0) {
LAB_003838e8:
    uVar26 = (ulong)*(uint *)(lVar22 + 0x6c);
    if (0 < (int)*(uint *)(lVar22 + 0x6c)) {
      lVar31 = 0;
      while( true ) {
        uVar26 = uVar26 - 1;
        lVar22 = *(long *)(lVar22 + 0x30) + lVar31;
        if ((*(int *)(lVar22 + 0x18) != 1) || (*(char *)(**(long **)(lVar22 + 0x20) + 0x41) == '\0')
           ) {
          FUN_003840e0(param_1,param_2,param_3);
        }
        if (uVar26 == 0) break;
        lVar22 = *param_1;
        lVar31 = lVar31 + 0x30;
      }
    }
    uVar28 = *(uint *)(param_1 + 5);
    if (uVar28 != 0xffffffff) {
      FUN_00335d58((long)param_2 + (ulong)uVar28,(long)param_3 + (ulong)uVar28);
    }
    uVar26 = *(ulong *)((long)param_2 + (ulong)*(uint *)((long)param_1 + 0x24));
    if ((uVar26 & 1) == 0) {
      puVar47 = (undefined8 *)FUN_0030c8c0();
      uVar26 = *(ulong *)((long)param_3 + (ulong)*(uint *)((long)param_1 + 0x24));
    }
    else {
      puVar47 = (undefined8 *)((uVar26 & 0xfffffffffffffffe) + 8);
      uVar26 = *(ulong *)((long)param_3 + (ulong)*(uint *)((long)param_1 + 0x24));
    }
    if ((uVar26 & 1) == 0) {
      puVar24 = (undefined8 *)FUN_0030c8c0();
    }
    else {
      puVar24 = (undefined8 *)((uVar26 & 0xfffffffffffffffe) + 8);
    }
    uVar21 = *puVar47;
    *puVar47 = *puVar24;
    *puVar24 = uVar21;
    uVar21 = *(undefined8 *)((long)puVar47 + 8);
    *(undefined8 *)((long)puVar47 + 8) = puVar24[1];
    puVar24[1] = uVar21;
    uVar21 = *(undefined8 *)((long)puVar47 + 0x10);
    *(undefined8 *)((long)puVar47 + 0x10) = puVar24[2];
    puVar24[2] = uVar21;
    return;
  }
  lVar45 = 0;
  lVar31 = -1;
  lVar36 = *(long *)(*(long *)(lVar22 + 0x28) + 0x58);
  if (lVar36 != 0) goto LAB_003838c8;
  do {
    FUN_00382880(param_1,param_2,param_3);
    iVar29 = (int)param_1[9];
    lVar22 = *param_1;
    do {
      lVar31 = lVar31 + 1;
      lVar45 = lVar45 + 0x98;
      if (iVar29 <= lVar31) goto LAB_003838e8;
      lVar36 = *(long *)(*(long *)(lVar22 + 0x28) + lVar45 + 0x58);
      if (lVar36 == 0) break;
LAB_003838c8:
    } while ((*(int *)(lVar36 + 0x18) != 1) ||
            (*(char *)(**(long **)(lVar36 + 0x20) + 0x41) == '\0'));
  } while( true );
}


