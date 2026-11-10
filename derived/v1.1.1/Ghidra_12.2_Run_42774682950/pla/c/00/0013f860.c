/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0013f860; name: FUN_0013f860
 */


void FUN_0013f860(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  
  *(undefined4 *)(param_1 + 0xe0) = 0x400;
  *(short *)(param_1 + 0xb4 + param_2 * 2) = *(short *)(param_1 + 0xb4 + param_2 * 2) + 0x3ec;
  uVar4 = *(ushort *)(param_1 + 0xb4);
  uVar5 = *(ushort *)(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0xb4) = 0x10001;
  *(undefined4 *)(param_1 + 0xb8) = 0x10001;
  iVar1 = (uint)uVar4 + (uint)*(ushort *)(param_1 + 0xb6);
  *(ushort *)(param_1 + 0x8a) =
       *(ushort *)(param_1 + 0x8a) + (short)((uint)uVar4 - (uint)*(ushort *)(param_1 + 0x8a) >> 1);
  iVar2 = iVar1 + (uint)uVar5;
  iVar3 = iVar2 + (uint)*(ushort *)(param_1 + 0xba);
  *(ushort *)(param_1 + 0x8c) =
       *(ushort *)(param_1 + 0x8c) + (short)(iVar1 - (uint)*(ushort *)(param_1 + 0x8c) >> 1);
  *(ushort *)(param_1 + 0x8e) =
       *(ushort *)(param_1 + 0x8e) + (short)(iVar2 - (uint)*(ushort *)(param_1 + 0x8e) >> 1);
  iVar1 = iVar3 + (uint)*(ushort *)(param_1 + 0xbc);
  iVar2 = iVar1 + (uint)*(ushort *)(param_1 + 0xbe);
  *(ushort *)(param_1 + 0x90) =
       *(ushort *)(param_1 + 0x90) + (short)(iVar3 - (uint)*(ushort *)(param_1 + 0x90) >> 1);
  iVar3 = iVar2 + (uint)*(ushort *)(param_1 + 0xc0);
  *(ushort *)(param_1 + 0x92) =
       *(ushort *)(param_1 + 0x92) + (short)(iVar1 - (uint)*(ushort *)(param_1 + 0x92) >> 1);
  iVar1 = iVar3 + (uint)*(ushort *)(param_1 + 0xc2);
  *(ushort *)(param_1 + 0x94) =
       *(ushort *)(param_1 + 0x94) + (short)(iVar2 - (uint)*(ushort *)(param_1 + 0x94) >> 1);
  iVar2 = iVar1 + (uint)*(ushort *)(param_1 + 0xc4);
  *(ushort *)(param_1 + 0x96) =
       *(ushort *)(param_1 + 0x96) + (short)(iVar3 - (uint)*(ushort *)(param_1 + 0x96) >> 1);
  iVar3 = iVar2 + (uint)*(ushort *)(param_1 + 0xc6);
  *(ushort *)(param_1 + 0x98) =
       *(ushort *)(param_1 + 0x98) + (short)(iVar1 - (uint)*(ushort *)(param_1 + 0x98) >> 1);
  *(ushort *)(param_1 + 0x9a) =
       *(ushort *)(param_1 + 0x9a) + (short)(iVar2 - (uint)*(ushort *)(param_1 + 0x9a) >> 1);
  *(undefined2 *)(param_1 + 0xbc) = 1;
  *(undefined2 *)(param_1 + 0xbe) = 1;
  *(undefined2 *)(param_1 + 0xc0) = 1;
  *(undefined2 *)(param_1 + 0xc2) = 1;
  *(undefined2 *)(param_1 + 0xc4) = 1;
  *(undefined2 *)(param_1 + 0xc6) = 1;
  *(ushort *)(param_1 + 0x9c) =
       *(ushort *)(param_1 + 0x9c) + (short)(iVar3 - (uint)*(ushort *)(param_1 + 0x9c) >> 1);
  uVar4 = *(ushort *)(param_1 + 200);
  *(undefined2 *)(param_1 + 200) = 1;
  iVar3 = iVar3 + (uint)uVar4;
  *(ushort *)(param_1 + 0x9e) =
       *(ushort *)(param_1 + 0x9e) + (short)(iVar3 - (uint)*(ushort *)(param_1 + 0x9e) >> 1);
  uVar4 = *(ushort *)(param_1 + 0xca);
  *(undefined2 *)(param_1 + 0xca) = 1;
  iVar3 = iVar3 + (uint)uVar4;
  *(ushort *)(param_1 + 0xa0) =
       *(ushort *)(param_1 + 0xa0) + (short)(iVar3 - (uint)*(ushort *)(param_1 + 0xa0) >> 1);
  uVar4 = *(ushort *)(param_1 + 0xcc);
  *(undefined2 *)(param_1 + 0xcc) = 1;
  iVar3 = iVar3 + (uint)uVar4;
  *(ushort *)(param_1 + 0xa2) =
       *(ushort *)(param_1 + 0xa2) + (short)(iVar3 - (uint)*(ushort *)(param_1 + 0xa2) >> 1);
  uVar4 = *(ushort *)(param_1 + 0xce);
  *(undefined2 *)(param_1 + 0xce) = 1;
  iVar3 = iVar3 + (uint)uVar4;
  *(ushort *)(param_1 + 0xa4) =
       *(ushort *)(param_1 + 0xa4) + (short)(iVar3 - (uint)*(ushort *)(param_1 + 0xa4) >> 1);
  uVar4 = *(ushort *)(param_1 + 0xd0);
  *(undefined2 *)(param_1 + 0xd0) = 1;
  iVar3 = iVar3 + (uint)uVar4;
  *(ushort *)(param_1 + 0xa6) =
       *(ushort *)(param_1 + 0xa6) + (short)(iVar3 - (uint)*(ushort *)(param_1 + 0xa6) >> 1);
  uVar4 = *(ushort *)(param_1 + 0xd2);
  *(undefined2 *)(param_1 + 0xd2) = 1;
  iVar3 = iVar3 + (uint)uVar4;
  *(ushort *)(param_1 + 0xa8) =
       *(ushort *)(param_1 + 0xa8) + (short)(iVar3 - (uint)*(ushort *)(param_1 + 0xa8) >> 1);
  uVar4 = *(ushort *)(param_1 + 0xd4);
  *(undefined2 *)(param_1 + 0xd4) = 1;
  iVar3 = iVar3 + (uint)uVar4;
  *(ushort *)(param_1 + 0xaa) =
       *(ushort *)(param_1 + 0xaa) + (short)(iVar3 - (uint)*(ushort *)(param_1 + 0xaa) >> 1);
  uVar4 = *(ushort *)(param_1 + 0xd6);
  *(undefined2 *)(param_1 + 0xd6) = 1;
  iVar3 = iVar3 + (uint)uVar4;
  *(ushort *)(param_1 + 0xac) =
       *(ushort *)(param_1 + 0xac) + (short)(iVar3 - (uint)*(ushort *)(param_1 + 0xac) >> 1);
  uVar4 = *(ushort *)(param_1 + 0xd8);
  *(undefined2 *)(param_1 + 0xd8) = 1;
  iVar3 = iVar3 + (uint)uVar4;
  *(ushort *)(param_1 + 0xae) =
       *(ushort *)(param_1 + 0xae) + (short)(iVar3 - (uint)*(ushort *)(param_1 + 0xae) >> 1);
  uVar4 = *(ushort *)(param_1 + 0xda);
  *(undefined2 *)(param_1 + 0xda) = 1;
  iVar3 = iVar3 + (uint)uVar4;
  *(ushort *)(param_1 + 0xb0) =
       *(ushort *)(param_1 + 0xb0) + (short)(iVar3 - (uint)*(ushort *)(param_1 + 0xb0) >> 1);
  uVar4 = *(ushort *)(param_1 + 0xdc);
  *(undefined2 *)(param_1 + 0xdc) = 1;
  *(ushort *)(param_1 + 0xb2) =
       *(ushort *)(param_1 + 0xb2) +
       (short)((iVar3 + (uint)uVar4) - (uint)*(ushort *)(param_1 + 0xb2) >> 1);
  FUN_0013f1e0();
  return;
}


