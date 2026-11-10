/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001befa4; name: FUN_001befa4
 */


void FUN_001befa4(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_250 [16];
  undefined1 auStack_240 [512];
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (*(char *)(lVar3 + 0x1fc) == '\0') {
    FUN_0331fefc(auStack_250,auStack_240,0x200);
    uVar2 = FUN_0332448c(auStack_250,"No mass properties available (");
    uVar2 = FUN_033245a4(uVar2,*(undefined4 *)(lVar3 + 0x1f8));
    FUN_0332448c(uVar2,
                 ") hkgpConvexHull::buildMassProperties need to be called before this operation.");
    iVar1 = FUN_03320b30(0x79f9d887,auStack_240,
                         "../..\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                         ,0x191);
    if (iVar1 != 0) {
      CallSupervisor(0x26);
    }
    FUN_0331ff7c(auStack_250);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  uVar2 = *(undefined8 *)(lVar3 + 0x160);
  param_2[1] = *(undefined8 *)(lVar3 + 0x168);
  *param_2 = uVar2;
  uVar2 = *(undefined8 *)(lVar3 + 0x170);
  param_2[3] = *(undefined8 *)(lVar3 + 0x178);
  param_2[2] = uVar2;
  uVar2 = *(undefined8 *)(lVar3 + 0x180);
  param_2[5] = *(undefined8 *)(lVar3 + 0x188);
  param_2[4] = uVar2;
  uVar2 = *(undefined8 *)(lVar3 + 400);
  param_2[7] = *(undefined8 *)(lVar3 + 0x198);
  param_2[6] = uVar2;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x1a0);
  param_3[1] = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x1a8);
  *param_3 = uVar2;
  return;
}


