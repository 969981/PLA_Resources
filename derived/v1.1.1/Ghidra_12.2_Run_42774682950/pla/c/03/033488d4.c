/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033488d4; name: FUN_033488d4
 */


void FUN_033488d4(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  uint *puVar3;
  uint local_38;
  uint uStack_34;
  uint local_28;
  uint local_24;
  
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    puVar3 = (uint *)*param_1;
    uVar1 = FUN_032e225c(lVar2,&DAT_0435baa0);
    if ((uVar1 & 1) != 0) {
      uVar1 = FUN_032e2598(lVar2);
      if ((uVar1 & 8) != 0) {
        puVar3 = (uint *)0x0;
      }
      goto LAB_0334891c;
    }
  }
  puVar3 = (uint *)0x0;
LAB_0334891c:
  local_38 = *puVar3;
  local_24 = local_38 & 0xff;
  local_28 = local_38 >> 8 & 0xff;
  uStack_34 = local_38 >> 0x10 & 0xff;
  local_38 = local_38 >> 0x18;
  FUN_032c6810(param_2,"{}.{}.{}.{}:{}",&DAT_04363860,&local_24,&local_28,&uStack_34,&local_38,
               puVar3 + 1);
  return;
}


