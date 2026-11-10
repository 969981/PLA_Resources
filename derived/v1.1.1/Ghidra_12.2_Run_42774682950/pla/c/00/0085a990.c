/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085a990; name: FUN_0085a990
 */


void FUN_0085a990(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 local_48 [4];
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  if ((*(long *)(param_2 + 0x10) == 0) || (*(long *)(param_2 + 0x770) == 0)) {
    local_38[0] = 0x10408;
  }
  else if (*(int *)(param_3 + 8) == 0) {
    local_38[0] = 0x10407;
  }
  else {
    memset(local_38,0,0x10);
    iVar1 = memcmp((void *)(param_3 + 0xc),local_38,0x10);
    if (iVar1 == 0) {
      local_48[0] = 0x10407;
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
      puVar4 = local_48;
      goto LAB_0085aa68;
    }
    lVar2 = FUN_007e4e20();
    if ((lVar2 != 0) && (lVar2 = FUN_007e4e20(), *(char *)(lVar2 + 0x5a9) == '\0')) {
      uVar3 = FUN_007e4e20();
      FUN_007e4e30(local_38,uVar3,0);
    }
    FUN_008473a8(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x770));
    lVar2 = FUN_00854f4c(*(undefined8 *)PTR_DAT_043773c0);
    *(undefined1 *)(lVar2 + 0x100) = *(undefined1 *)(*(long *)PTR_DAT_04377550 + 0x471);
    local_38[0] = 0;
  }
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_48);
  puVar4 = local_38;
LAB_0085aa68:
  FUN_007ee578(param_1,puVar4);
  return;
}


