/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d1538; name: FUN_029d1538
 */


void FUN_029d1538(long param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  char *pcVar2;
  long lVar3;
  
  bVar1 = *param_3;
  pcVar2 = *(char **)(*(long *)(param_1 + 0x10) + 0xa8);
  if ((((*pcVar2 == '\0') || (pcVar2[2] != bVar1)) && ((pcVar2[3] == '\0' || (pcVar2[5] != bVar1))))
     && ((((pcVar2[6] == '\0' || (pcVar2[8] != bVar1)) &&
          ((pcVar2[9] == '\0' || (pcVar2[0xb] != bVar1)))) &&
         (((pcVar2[0xc] == '\0' || (pcVar2[0xe] != bVar1)) &&
          ((pcVar2[0xf] == '\0' || (pcVar2[0x11] != bVar1)))))))) {
    return;
  }
  lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (ulong)bVar1 * 8 + 0x120);
  FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x6f,(ulong)bVar1,0);
  FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9d,0x164,
               *(undefined1 *)(lVar3 + 0x7d),0xffff0000);
  return;
}


