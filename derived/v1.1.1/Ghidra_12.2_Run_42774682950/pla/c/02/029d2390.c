/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d2390; name: FUN_029d2390
 */


uint FUN_029d2390(long param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long local_50;
  undefined2 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined1 auStack_28 [8];
  
  uVar3 = FUN_029d26a4();
  if ((uVar3 & 1) != 0) {
    local_48 = 0x2d1f;
    local_40 = 0;
    local_38 = 0;
    local_50 = param_2;
    FUN_029ea15c(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1340),auStack_28,&local_50);
  }
  FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0xa6,
               *(undefined1 *)(param_2 + 0x7d),uVar3 & 1);
  lVar4 = *(long *)(param_1 + 0x20);
  bVar2 = *(byte *)(param_2 + 0x7d);
  lVar5 = *(long *)(*(long *)(*(long *)(*(long *)(lVar4 + 0x20) + 0x10) + 8) + (ulong)bVar2 * 8 +
                   0x120);
  iVar1 = *(int *)(lVar5 + 0x3a0);
  iVar6 = 0xffff;
  if (iVar1 + 1U < 0xffff) {
    iVar6 = iVar1 + 1;
  }
  *(int *)(lVar5 + 0x3a0) = iVar6;
  FUN_02a3e6b8(*(undefined8 *)(lVar4 + 0x18),0x35,(ulong)bVar2,3,1);
  return uVar3 & 1;
}


