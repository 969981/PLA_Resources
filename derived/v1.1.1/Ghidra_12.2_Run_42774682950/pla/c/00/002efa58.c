/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002efa58; name: FUN_002efa58
 */


void FUN_002efa58(void)

{
  undefined *puVar1;
  byte bVar2;
  undefined1 *puVar3;
  undefined2 *puVar4;
  
  puVar1 = PTR_DAT_043737d0;
  if (*PTR_DAT_04373858 == '\0') {
    bVar2 = FUN_002ee824(&PTR_s_grpc_enable_fork_support_04153050);
    *puVar1 = bVar2 & 1;
    bVar2 = *puVar1;
  }
  else {
    bVar2 = *PTR_DAT_043737d0;
  }
  if ((bVar2 & 1) == 0) {
    return;
  }
  puVar3 = (undefined1 *)FUN_002e2e80(PTR_FUN_04373078,0x50);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 1;
    FUN_002ef6d0(puVar3 + 8);
    FUN_002ef7d0(puVar3 + 0x28);
    *(undefined8 *)(puVar3 + 0x48) = 2;
  }
  *(undefined1 **)PTR_DAT_04373860 = puVar3;
  puVar4 = (undefined2 *)FUN_002e2e80(PTR_FUN_04373078,0x50);
  if (puVar4 != (undefined2 *)0x0) {
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 0x24) = 0;
    FUN_002ef6d0(puVar4 + 4);
    FUN_002ef7d0(puVar4 + 0x14);
  }
  *(undefined2 **)PTR_DAT_04373868 = puVar4;
  return;
}


