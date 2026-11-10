/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03150914; name: FUN_03150914
 */


void FUN_03150914(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  ulong uStack_38;
  
  uVar3 = (**(code **)(**(long **)(param_1 + 0x28) + 0x80))
                    (*(long **)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  plVar1 = *(long **)(param_1 + 0x28);
  lVar4 = (**(code **)(*plVar1 + 0x80))(plVar1,*(undefined8 *)(param_1 + 0x20));
  lVar4 = (**(code **)(*plVar1 + 0x100))(plVar1,*(undefined4 *)(lVar4 + 0x80));
  FUN_03150870(lVar4,uVar3,param_2 + 0xd0);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x1b8);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x1b0);
  *(undefined8 *)(param_2 + 0x168) = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_2 + 0x160) = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_2 + 0x178) = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(param_2 + 0x170) = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(param_2 + 0x150) = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_2 + 0x108) = uVar5;
  *(undefined8 *)(param_2 + 0x100) = uVar3;
  *(undefined8 *)(param_2 + 0x188) = uVar5;
  *(undefined8 *)(param_2 + 0x180) = uVar3;
  *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_2 + 0x118);
  *(undefined8 *)(param_2 + 400) = *(undefined8 *)(param_2 + 0x110);
  *(undefined4 *)(param_2 + 0x158) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined8 *)(param_2 + 0x1c8) = *(undefined8 *)(param_2 + 0x148);
  *(undefined8 *)(param_2 + 0x1c0) = *(undefined8 *)(param_2 + 0x140);
  *(undefined8 *)(param_2 + 0x1a8) = *(undefined8 *)(param_2 + 0x128);
  *(undefined8 *)(param_2 + 0x1a0) = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(param_2 + 0x1b8) = *(undefined8 *)(param_2 + 0x138);
  *(undefined8 *)(param_2 + 0x1b0) = *(undefined8 *)(param_2 + 0x130);
  uStack_38 = *(ulong *)(lVar4 + 0x30);
  uStack_40 = *(undefined8 *)(lVar4 + 0x28);
  uVar3 = *(undefined8 *)(lVar4 + 0x38);
  uVar2 = uStack_38 >> 0x20;
  FUN_032cc384(param_2 + 0x170,param_2 + 0x110,&uStack_40);
  *(ulong *)(param_2 + 0x168) = uVar2;
  *(undefined8 *)(param_2 + 0x160) = uVar3;
  return;
}


