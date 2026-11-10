/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0091dab8; name: FUN_0091dab8
 */


void FUN_0091dab8(long param_1,long param_2,undefined4 param_3)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong local_28;
  
  lVar3 = FUN_00933eec(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xd0),
                       *(undefined1 *)(param_2 + 0x7d));
  FUN_0091db74(param_1,&local_28,lVar3,param_3);
  if ((local_28 & 0xf) == 2) {
    FUN_00935ef0(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xf8));
    cVar1 = *(char *)(lVar3 + 0xb9);
  }
  else {
    cVar1 = *(char *)(lVar3 + 0xb9);
  }
  if ((cVar1 != '\0') && (uVar4 = FUN_0293d0a0(&local_28), (uVar4 & 1) == 0)) {
    FUN_00932214(lVar3,0);
  }
  pbVar5 = *(byte **)(param_1 + 0x70);
  bVar2 = *pbVar5;
  if ((ulong)bVar2 < 10) {
    *pbVar5 = bVar2 + 1;
    *(ulong *)(pbVar5 + (ulong)bVar2 * 8 + 8) = local_28;
  }
  return;
}


