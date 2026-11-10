/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005a0e20; name: FUN_005a0e20
 */


void FUN_005a0e20(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long extraout_x1;
  long extraout_x1_00;
  long extraout_x1_01;
  uint uVar8;
  undefined1 auVar9 [16];
  long local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  plVar4 = *(long **)(param_2 + 0xf8);
  if (plVar4 == (long *)0x0) {
LAB_005a0fc8:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plVar1 = (long *)(param_2 + 0x108);
  lVar5 = param_2;
  if (*(int *)(param_2 + 0x100) != (int)plVar4[1]) {
    do {
      *(undefined1 **)(param_2 + 0x148) = &LAB_005a1080;
      *(long *)(param_2 + 0x150) = param_2;
      *(undefined8 *)(param_2 + 0x158) = 0;
      *(undefined2 *)(param_2 + 0x160) = 0;
      *(undefined8 *)(param_2 + 0x178) = 0;
      *(undefined4 *)(param_2 + 0x180) = 0;
      *(char **)(param_2 + 0x168) =
           "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
      ;
      *(undefined4 *)(param_2 + 0x170) = 0x50e;
      auVar9 = (**(code **)(*plVar4 + 0x18))(plVar4,0xffffffff,param_2 + 0x140);
      lVar5 = auVar9._8_8_;
      if ((auVar9._0_8_ & 1) == 0) {
LAB_005a0eb8:
        plVar4 = *(long **)(param_2 + 0xf8);
      }
      else {
        lVar5 = (**(code **)(**(long **)(param_2 + 0xf8) + 0x20))(*(long **)(param_2 + 0xf8),plVar1)
        ;
        if (lVar5 != 0) {
          puVar7 = *(undefined8 **)(param_2 + 0xf8);
          *(undefined8 *)(param_2 + 0xf8) = 0;
          if (puVar7 != (undefined8 *)0x0) {
                    /* try { // try from 005a0f34 to 005a0f37 has its CatchHandler @ 005a1078 */
            (**(code **)*puVar7)();
          }
          FUN_0059adb0(param_1,param_2,lVar5);
          lVar5 = extraout_x1;
          goto LAB_005a0eb8;
        }
        if (*plVar1 == 0) {
          uVar8 = (uint)*(byte *)(param_2 + 0x110);
        }
        else {
          uVar8 = (uint)*(undefined8 *)(param_2 + 0x110);
        }
        *(uint *)(param_2 + 0x100) = *(int *)(param_2 + 0x100) + uVar8;
        uStack_78 = *(undefined8 *)(param_2 + 0x110);
        local_80 = *plVar1;
        uStack_68 = *(undefined8 *)(param_2 + 0x120);
        uStack_70 = *(undefined8 *)(param_2 + 0x118);
        FUN_003052c0(param_2 + 0x9e8,&local_80);
        lVar5 = extraout_x1_00;
        if ((*(int *)(param_2 + 200) == 0) ||
           ((*(char *)(param_2 + 0x204) != '\0' &&
            (*(ulong *)(param_2 + 0xa08) <= (ulong)*(uint *)(param_1 + 0xe20))))) goto LAB_005a0eb8;
        if ((*(long *)(param_1 + 0x48) == 0) &&
           (uVar6 = FUN_005ac230(param_1,param_2), (uVar6 & 1) != 0)) {
          FUN_00598b70(param_2,"chttp2_writing:become");
        }
        FUN_00598190(param_1,2);
        plVar4 = *(long **)(param_2 + 0xf8);
        lVar5 = extraout_x1_01;
      }
      if (plVar4 == (long *)0x0) goto LAB_005a0fc8;
    } while (*(int *)(param_2 + 0x100) != (int)plVar4[1]);
  }
  lVar2 = *(long *)(param_2 + 0x128);
  if (*(long *)(param_2 + 0x130) < lVar2) {
    plVar4 = *(long **)(param_1 + 0x1240);
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)FUN_002ebd50(0x18);
    }
    else {
      *(long *)(param_1 + 0x1240) = plVar4[2];
    }
    *plVar4 = lVar2;
    plVar4[1] = *(long *)(param_2 + 0x188);
    *(undefined8 *)(param_2 + 0x188) = 0;
    bVar3 = (*(uint *)(*(long *)(param_2 + 0xf8) + 0xc) & 4) != 0;
    plVar1 = (long *)(param_2 + 0xb10);
    if (bVar3) {
      plVar1 = (long *)(param_2 + 0xb18);
    }
    plVar4[2] = *plVar1;
    lVar5 = 0xb10;
    if (bVar3) {
      lVar5 = 0xb18;
    }
    *(long **)(param_2 + lVar5) = plVar4;
    puVar7 = *(undefined8 **)(param_2 + 0xf8);
    *(undefined8 *)(param_2 + 0xf8) = 0;
  }
  else {
    FUN_00599e40(param_1,lVar5,param_2 + 0x188,0,"fetching_send_message_finished");
    puVar7 = *(undefined8 **)(param_2 + 0xf8);
    *(undefined8 *)(param_2 + 0xf8) = 0;
  }
  if (puVar7 != (undefined8 *)0x0) {
                    /* try { // try from 005a1050 to 005a1053 has its CatchHandler @ 005a1074 */
    (**(code **)*puVar7)();
  }
  return;
}


