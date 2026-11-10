/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027bc9d4; name: FUN_027bc9d4
 */


void FUN_027bc9d4(long param_1,byte param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  code *pcVar5;
  
  FUN_02c2e7d0(*(undefined8 *)(param_1 + 0x30),param_4,*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 8);
  *(byte *)(param_1 + 0x52) = ~param_2 & 1;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined1 *)(param_1 + 0x90) = 1;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x92) = 0xffff;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  if ((undefined1 *)*param_5 != &DAT_cbf29ce484222645) {
    FUN_02c2e7d0(*(undefined8 *)(param_1 + 0x30),param_5,*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x10);
  }
  if ((undefined1 *)*param_6 != &DAT_cbf29ce484222645) {
    FUN_02c2e7d0(*(undefined8 *)(param_1 + 0x30),param_6,*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x18);
  }
  if ((undefined1 *)*param_7 != &DAT_cbf29ce484222645) {
    FUN_02c2e7d0(*(undefined8 *)(param_1 + 0x30),param_7,*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x20);
  }
  if ((undefined1 *)*param_8 != &DAT_cbf29ce484222645) {
    FUN_02c2e7d0(*(undefined8 *)(param_1 + 0x30),param_8,*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x28);
  }
  FUN_00d428b0(*(undefined8 *)(param_1 + 0x38),0);
  plVar4 = (long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x5b0) + 0x68);
  (**(code **)(*plVar4 + 8))(plVar4,0);
  (**(code **)(**(long **)(param_1 + 0x38) + 0x90))
            (*(long **)(param_1 + 0x38),(undefined8 *)(param_1 + 0x40),
             (undefined8 *)(param_1 + 0x58));
  pcVar5 = *(code **)(param_1 + 0x128);
  if (pcVar5 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(undefined8 *)(param_1 + 0x138) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
    (*pcVar5)(param_1 + 0x140);
  }
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3 + 4,param_1 + 0x140);
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = param_3[3];
    *(undefined8 *)(param_1 + 0x130) = param_3[2];
    *(undefined8 *)(param_1 + 0x138) = uVar3;
    *(undefined8 *)(param_1 + 0x120) = uVar1;
    *(undefined8 *)(param_1 + 0x128) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x1a0) = 2;
  return;
}


