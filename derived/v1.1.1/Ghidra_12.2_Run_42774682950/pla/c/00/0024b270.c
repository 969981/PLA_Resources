/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0024b270; name: FUN_0024b270
 */


void FUN_0024b270(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  long local_50;
  long lStack_48;
  
  if ((*(long *)(param_1 + 0xd8) != 0) && ((**(byte **)(param_2 + 200) >> 1 & 1) == 0)) {
    FUN_0023feb0(*(long *)(param_1 + 0xd8),param_2);
    if (*(byte *)(param_1 + 0xf0) < 4) {
      FUN_0022d3e0(param_3,param_2);
      uVar9 = *(uint *)(param_1 + 0x60);
      if ((uVar9 >> 0x12 & 1) != 0) {
        lVar4 = FUN_00242728(param_1,0x12);
        if (lVar4 != 0) {
          lVar5 = FUN_002424d0(param_1,6);
          if ((((*(byte *)(param_1 + 0x62) >> 1 & 1) == 0) && ((*(byte *)(lVar5 + 4) >> 4 & 1) != 0)
              ) && (0.0 < *(float *)(lVar5 + 0xdc))) {
            FUN_0024b130(param_1,param_2,param_3,lVar5,lVar4);
          }
          plVar1 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                           (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
          lStack_48 = plVar1[1];
          local_50 = *plVar1 + (ulong)*(uint *)(lVar4 + 8);
          if (-1 < *(int *)(lVar4 + 4)) {
            FUN_00878324(param_3,*(int *)(lVar4 + 4),4,&local_50,0x120);
          }
          if ((*(byte *)(param_1 + 0x62) >> 1 & 1) != 0) {
            FUN_00244b9c(param_1,param_3,param_2);
          }
          if ((*(byte *)(lVar5 + 4) & 0x9f) == 0x90) {
            return;
          }
          FUN_0022d450(param_3,param_2);
          return;
        }
        uVar9 = *(uint *)(param_1 + 0x60);
      }
      if ((uVar9 >> 0x11 & 1) != 0) {
        FUN_00244b9c(param_1,param_3,param_2);
      }
      FUN_0022d450(param_3,param_2);
      return;
    }
    uVar6 = FUN_0022d744(param_2,*(undefined8 *)(*(long *)(param_1 + 0xd8) + 0x20),
                         *(undefined2 *)(*(long *)(param_1 + 0xd8) + 0x4a));
    if ((uVar6 & 1) != 0) {
      FUN_00241978(*(undefined8 *)(param_1 + 0xd8),param_3);
    }
    plVar1 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                     (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
    lStack_48 = plVar1[1];
    local_50 = *plVar1 + *(long *)(*(long *)(param_1 + 0xf8) + 8);
    uVar7 = FUN_0028edf8(*(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x18));
    uVar8 = FUN_0028ee24(*(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x18));
    FUN_00877a64(param_3,0,&local_50,uVar7,uVar8);
    *(undefined1 *)(param_2 + 0x18c) = 1;
    FUN_0024138c(*(undefined8 *)(param_1 + 0xd8),param_3,param_2);
    if ((*(byte *)(param_1 + 0x62) >> 1 & 1) != 0) {
      FUN_00244b9c(param_1,param_3,param_2);
    }
    plVar1 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                     (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
    lStack_48 = plVar1[1];
    local_50 = *plVar1 + *(long *)(*(long *)(param_1 + 0xf8) + 0x10);
    uVar2 = FUN_0028ee3c(*(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x18));
    uVar3 = FUN_0028ee4c(*(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x18));
    FUN_00877574(param_3,3,uVar2,&local_50,uVar3,0);
  }
  return;
}


