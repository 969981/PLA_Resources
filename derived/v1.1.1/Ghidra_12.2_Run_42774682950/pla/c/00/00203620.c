/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00203620; name: FUN_00203620
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_00203620(void)

{
  int iVar1;
  size_t sVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  
  if ((DAT_0438eb0c & 1) == 0) {
    DAT_0438eb0d._0_7_ = _DAT_0390f780;
    DAT_0438eb0d._7_1_ = s__7_64_1_0390f787[0];
    uRam000000000438eb15 = s__7_64_1_0390f787._1_7_;
    sVar2 = strlen((char *)&DAT_0438eb0d);
    uVar5 = 200 - sVar2;
    puVar6 = (undefined1 *)((long)&DAT_0438eb0d + sVar2);
    if ((1 < uVar5) && (lVar3 = thunk_FUN_00204608(sVar2 + 0x438eb0e,199 - sVar2), lVar3 != 0)) {
      *puVar6 = 0x20;
      uVar5 = uVar5 - (lVar3 + 1);
      puVar6 = puVar6 + lVar3 + 1;
    }
    uVar4 = FUN_00216400();
    iVar1 = FUN_001e64cc(puVar6,uVar5," zlib/%s",uVar4);
    FUN_001ef788(puVar6 + iVar1,uVar5 - (long)iVar1);
    DAT_0438eb0c = 1;
  }
  return &DAT_0438eb0d;
}


