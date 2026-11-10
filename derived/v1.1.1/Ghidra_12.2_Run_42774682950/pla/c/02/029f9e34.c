/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029f9e34; name: FUN_029f9e34
 */


void FUN_029f9e34(long param_1,long param_2,uint param_3)

{
  byte bVar1;
  ulong uVar2;
  char *pcVar3;
  undefined8 uVar4;
  long lVar5;
  char local_54 [4];
  undefined8 local_48;
  
  if (*(short *)(param_2 + 0x74) != 0) {
    bVar1 = *(byte *)(param_2 + 0x7d);
    pcVar3 = *(char **)(*(long *)(param_1 + 0x10) + 0xa8);
    if (((((*pcVar3 != '\0') && (pcVar3[2] == bVar1)) ||
         ((pcVar3[3] != '\0' && (pcVar3[5] == bVar1)))) ||
        ((((pcVar3[6] != '\0' && (pcVar3[8] == bVar1)) ||
          ((pcVar3[9] != '\0' && (pcVar3[0xb] == bVar1)))) ||
         (((pcVar3[0xc] != '\0' && (pcVar3[0xe] == bVar1)) ||
          ((pcVar3[0xf] != '\0' && (pcVar3[0x11] == bVar1)))))))) &&
       ((*(byte *)(param_2 + 900) >> 1 & 1) != 0)) {
      uVar4 = *(undefined8 *)(param_2 + (ulong)param_3 * 8 + 0x90);
      lVar5 = *(long *)(param_1 + 0x20);
      local_48 = uVar4;
      uVar2 = FUN_02951d74(*(undefined8 *)
                            (*(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0x10) + 8) +
                             (ulong)bVar1 * 8 + 0x120),param_3,local_54);
      FUN_02a3e6b8(*(undefined8 *)(lVar5 + 0x18),0x19,(ulong)bVar1,param_3);
      if ((uVar2 & 1) != 0) {
        FUN_029f9f88(param_1,param_2,param_3,uVar4);
        if (local_54[0] != '\0') {
          FUN_029fa2c4(param_1,param_2,param_3,&local_48);
        }
      }
    }
  }
  return;
}


