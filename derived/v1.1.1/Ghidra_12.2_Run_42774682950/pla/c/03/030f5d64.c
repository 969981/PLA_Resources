/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030f5d64; name: FUN_030f5d64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030f5d64(undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  long *local_58;
  
  *param_1 = param_2;
  FUN_030f6c40(param_1 + 0x12,param_3);
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0xffffffff00ffffff;
  FUN_02fd9898(param_1 + 0x1c);
  FUN_02fd9898(param_1 + 0x60);
  lVar8 = FUN_032cf5b0(0xc90);
  *(long *)(lVar8 + 0x220) = lVar8 + 0x230;
  *(undefined8 *)(lVar8 + 0x218) = 0;
  *(undefined8 *)(lVar8 + 0x28) = 0;
  *(undefined8 *)(lVar8 + 0x30) = 0;
  *(undefined8 *)(lVar8 + 0x38) = 0;
  *(undefined8 *)(lVar8 + 0x40) = 0;
  *(undefined4 *)(lVar8 + 0x228) = 0x800;
  *(undefined8 *)(lVar8 + 0x48) = 0;
  *(undefined8 *)(lVar8 + 0x50) = 0;
  *(undefined8 *)(lVar8 + 0x58) = 0;
  *(undefined8 *)(lVar8 + 0x60) = 0;
  *(undefined8 *)(lVar8 + 0x68) = 0;
  *(undefined8 *)(lVar8 + 0x70) = 0;
  *(undefined **)(lVar8 + 0x210) = PTR_DAT_043724f8 + 0x10;
  uVar7 = DAT_0388a148;
  uVar6 = DAT_0388a140;
  uVar5 = _UNK_03889a88;
  uVar4 = _DAT_03889a80;
  *(undefined8 *)(lVar8 + 0x200) = 0;
  *(undefined4 *)(lVar8 + 0x1d8) = 0;
  *(undefined4 *)(lVar8 + 0x1e4) = 0;
  *(undefined4 *)(lVar8 + 0x1e0) = 0xd;
  *(undefined8 *)(lVar8 + 0xc0) = 0;
  *(undefined2 *)(lVar8 + 0xc78) = 0xffff;
  *(undefined8 *)(lVar8 + 200) = 0;
  *(undefined8 *)(lVar8 + 0xd0) = 0;
  *(undefined8 *)(lVar8 + 0x88) = uVar5;
  *(undefined8 *)(lVar8 + 0x80) = uVar4;
  *(undefined8 *)(lVar8 + 0x98) = uVar7;
  *(undefined8 *)(lVar8 + 0x90) = uVar6;
  uVar6 = _UNK_0388a138;
  uVar5 = _DAT_0388a130;
  uVar4 = _DAT_03888d10;
  *(undefined8 *)(lVar8 + 0xa8) = _UNK_03888d18;
  *(undefined8 *)(lVar8 + 0xa0) = uVar4;
  *(undefined8 *)(lVar8 + 0xb8) = uVar6;
  *(undefined8 *)(lVar8 + 0xb0) = uVar5;
  auVar10 = NEON_fmov(0x3f800000,4);
  *(long *)(lVar8 + 0x1f8) = auVar10._8_8_;
  *(long *)(lVar8 + 0x1f0) = auVar10._0_8_;
  *(long *)(param_1 + 0xa4) = lVar8;
  *(undefined8 *)(param_1 + 0xa6) = 0;
  *(undefined2 *)(param_1 + 0xac) = 0xffff;
  param_1[0xad] = 0;
  *(undefined8 *)(param_1 + 0xae) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xaa) = 0;
  *(undefined2 *)(param_1 + 0xb0) = 1;
  *(undefined1 *)((long)param_1 + 0x2c2) = 0xfb;
  *(undefined8 *)(param_1 + 0xb2) = 0;
  param_1[0xb4] = 0;
  *(undefined8 *)(param_1 + 0xb6) = 0;
  *(undefined2 *)(param_1 + 0xbc) = 0xffff;
  param_1[0xbd] = 0;
  *(undefined8 *)(param_1 + 0xbe) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xba) = 0;
  *(undefined1 *)(param_1 + 0xc0) = 1;
  *(undefined1 *)((long)param_1 + 0x302) = 0xfb;
  *(undefined1 *)((long)param_1 + 0x301) = 0;
  *(undefined8 *)(param_1 + 0xc2) = 0;
  param_1[0xc4] = 0;
  *(undefined8 *)(param_1 + 0xc6) = 0;
  FUN_030f6ebc(param_1 + 200);
  *(undefined8 *)(param_1 + 0xea) = 0x100000000;
  *(undefined4 **)(param_1 + 0x154) = param_1 + 0x158;
  *(undefined4 **)(param_1 + 0x1b4) = param_1 + 0x1bc;
  *(undefined8 *)(param_1 + 0x156) = 0x8000000400000000;
  *(undefined8 *)(param_1 + 0xe4) = 0;
  *(undefined4 **)(param_1 + 0xe6) = param_1 + 0x1c;
  *(undefined4 **)(param_1 + 0xe8) = param_1 + 0x60;
  *(undefined8 *)(param_1 + 0xec) = 0xffffffff00ffffff;
  param_1[0xee] = 0;
  *(undefined8 *)(param_1 + 0x10c) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  param_1[0x1b6] = 0;
  param_1[0x1b7] = 0x80000018;
  FUN_02fd8d60(&local_58);
  plVar1 = local_58;
  local_58 = (long *)0x0;
  plVar9 = *(long **)(param_1 + 0xa6);
  *(long **)(param_1 + 0xa6) = plVar1;
  if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
    plVar1 = plVar9 + 2;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((lVar8 + -1 == 0) && ((**(code **)(*plVar9 + 0x18))(), local_58 != (long *)0x0)) &&
       (local_58[1] != 0)) {
      plVar1 = local_58 + 2;
      do {
        lVar8 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(*local_58 + 0x18))();
      }
    }
  }
  *(undefined8 *)(param_1 + 0xb2) = *(undefined8 *)(param_1 + 0xa6);
  *(undefined2 *)(param_1 + 0xac) = 0xffff;
  param_1[0xad] = 0;
  *(undefined8 *)(param_1 + 0xae) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined2 *)(param_1 + 0xb0) = 1;
  *(undefined1 *)((long)param_1 + 0x2c2) = 0xfb;
  *(undefined8 *)(param_1 + 0xb6) = 0;
  *(undefined4 **)(param_1 + 0xaa) = param_1 + 200;
  *(undefined4 **)(param_1 + 0xd0) = param_1 + 0xa8;
  param_1[0xb4] = 0x7f7fffee;
  return;
}


