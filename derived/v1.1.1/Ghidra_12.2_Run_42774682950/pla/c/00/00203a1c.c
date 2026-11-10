/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00203a1c; name: FUN_00203a1c
 */


undefined8 FUN_00203a1c(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  
  puVar1 = PTR_PTR_04372758;
  if (*(undefined8 **)PTR_PTR_04372758 == &DAT_0411d650) {
    if (param_1 != 0) {
      *(long *)PTR_PTR_04372758 = param_1;
      return 0;
    }
    if (PTR_DAT_0411d640 != (undefined *)0x0) {
      lVar3 = FUN_0020188c("CURL_SSL_BACKEND");
      if ((lVar3 == 0) || (PTR_DAT_0411d640 == (undefined *)0x0)) {
LAB_00203acc:
        puVar4 = PTR_DAT_0411d640;
      }
      else {
        iVar2 = FUN_001f8b48(lVar3,*(undefined8 *)(PTR_DAT_0411d640 + 8));
        ppuVar5 = &PTR_DAT_0411d640;
        while (iVar2 == 0) {
          if (ppuVar5[1] == (undefined *)0x0) goto LAB_00203acc;
          iVar2 = FUN_001f8b48(lVar3,*(undefined8 *)(ppuVar5[1] + 8));
          ppuVar5 = ppuVar5 + 1;
        }
        puVar4 = *ppuVar5;
      }
      *(undefined **)puVar1 = puVar4;
      thunk_FUN_002044d4(lVar3);
      return 0;
    }
  }
  return 1;
}


