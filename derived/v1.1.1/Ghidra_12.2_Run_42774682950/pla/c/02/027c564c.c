/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027c564c; name: FUN_027c564c
 */


undefined8 FUN_027c564c(long param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  
  if ((((*(long *)(param_1 + 0x70) == 0) || (uVar6 = FUN_02a43a8c(), (uVar6 & 1) != 0)) ||
      (plVar9 = *(long **)(param_1 + 0x80), plVar9 == (long *)0x0)) ||
     (uVar6 = (**(code **)*plVar9)(plVar9), (uVar6 & 1) == 0)) {
    uVar10 = 0;
  }
  else {
    lVar7 = (**(code **)(*plVar9 + 0x20))(plVar9);
    uVar5 = (**(code **)(*plVar9 + 0x28))(plVar9);
    uVar10 = 0;
    if ((lVar7 != 0) && ((uVar5 & 0xff) != 0xfd)) {
      uVar10 = *param_2;
      uVar1 = param_2[1];
      uVar2 = param_2[3];
      *(undefined8 *)(param_1 + 0xb0) = param_2[2];
      *(undefined8 *)(param_1 + 0xb8) = uVar2;
      *(undefined8 *)(param_1 + 0xa0) = uVar10;
      *(undefined8 *)(param_1 + 0xa8) = uVar1;
      uVar10 = param_2[4];
      uVar1 = param_2[5];
      uVar2 = param_2[7];
      *(undefined8 *)(param_1 + 0xd0) = param_2[6];
      *(undefined8 *)(param_1 + 0xd8) = uVar2;
      *(undefined8 *)(param_1 + 0xc0) = uVar10;
      *(undefined8 *)(param_1 + 200) = uVar1;
      uVar10 = param_2[8];
      uVar1 = param_2[9];
      uVar2 = param_2[0xb];
      *(undefined8 *)(param_1 + 0xf0) = param_2[10];
      *(undefined8 *)(param_1 + 0xf8) = uVar2;
      *(undefined8 *)(param_1 + 0xe0) = uVar10;
      *(undefined8 *)(param_1 + 0xe8) = uVar1;
      uVar10 = param_2[0xc];
      uVar1 = param_2[0xd];
      uVar2 = param_2[0xf];
      *(undefined8 *)(param_1 + 0x110) = param_2[0xe];
      *(undefined8 *)(param_1 + 0x118) = uVar2;
      *(undefined8 *)(param_1 + 0x100) = uVar10;
      *(undefined8 *)(param_1 + 0x108) = uVar1;
      FUN_008802f0(param_1 + 0x88,param_3);
      lVar8 = param_1 + ((ulong)uVar5 & 0xff) * 0x90;
      uVar10 = *(undefined8 *)(param_3 + 0x10);
      *(char *)(param_1 + 0x5a0) = (char)uVar5;
      *(undefined8 *)(param_1 + 0x98) = uVar10;
      *(long *)(lVar8 + 0x1a0) = lVar7;
      uVar1 = *param_2;
      uVar2 = param_2[1];
      uVar3 = param_2[3];
      uVar10 = 1;
      *(undefined8 *)(lVar8 + 0x130) = param_2[2];
      *(undefined8 *)(lVar8 + 0x138) = uVar3;
      *(undefined8 *)(lVar8 + 0x120) = uVar1;
      *(undefined8 *)(lVar8 + 0x128) = uVar2;
      uVar1 = param_2[4];
      uVar2 = param_2[5];
      uVar3 = param_2[7];
      *(undefined8 *)(lVar8 + 0x150) = param_2[6];
      *(undefined8 *)(lVar8 + 0x158) = uVar3;
      *(undefined8 *)(lVar8 + 0x140) = uVar1;
      *(undefined8 *)(lVar8 + 0x148) = uVar2;
      uVar1 = param_2[8];
      uVar2 = param_2[9];
      uVar3 = param_2[0xb];
      *(undefined8 *)(lVar8 + 0x170) = param_2[10];
      *(undefined8 *)(lVar8 + 0x178) = uVar3;
      *(undefined8 *)(lVar8 + 0x160) = uVar1;
      *(undefined8 *)(lVar8 + 0x168) = uVar2;
      uVar1 = param_2[0xc];
      uVar3 = param_2[0xd];
      uVar2 = param_2[0xe];
      uVar4 = param_2[0xf];
      *(undefined1 *)(lVar8 + 0x1a8) = 1;
      *(undefined8 *)(lVar8 + 400) = uVar2;
      *(undefined8 *)(lVar8 + 0x198) = uVar4;
      *(undefined8 *)(lVar8 + 0x180) = uVar1;
      *(undefined8 *)(lVar8 + 0x188) = uVar3;
      FUN_027bff9c(param_1,lVar7,uVar5,param_2);
    }
  }
  return uVar10;
}


