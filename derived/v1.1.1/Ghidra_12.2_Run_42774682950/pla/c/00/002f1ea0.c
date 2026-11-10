/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f1ea0; name: FUN_002f1ea0
 */


char FUN_002f1ea0(long *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = *param_1;
  if (lVar7 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/error.cc",0xc1,2,
                 "assertion failed: %s",&DAT_038da84b);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar1 = (uint)*(byte *)(lVar7 + 0x2f) + ((uint)(param_2 >> 3) & 0xff);
  lVar6 = lVar7;
  if (*(byte *)(lVar7 + 0x30) < uVar1) {
    uVar4 = (uint)*(byte *)(lVar7 + 0x30) * 3;
    uVar2 = 0xfffffffe;
    if (uVar4 < 0x1fe) {
      uVar2 = uVar4 >> 1;
    }
    *(char *)(lVar7 + 0x30) = (char)uVar2;
    if ((uVar2 & 0xff) < uVar1) {
      return -1;
    }
    lVar6 = FUN_002ebdc0(lVar7,(uVar2 & 0xff) * 8 + 0x38);
    *param_1 = lVar6;
    if ((PTR_DAT_04373880[0x10] != '\0') && (bVar5 = lVar7 != lVar6, lVar6 = lVar7, bVar5)) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/error.cc",0xd1,0,
                   "realloc %p -> %p",lVar7);
      lVar6 = *param_1;
    }
  }
  cVar3 = *(char *)(lVar6 + 0x2f);
  *(char *)(lVar6 + 0x2f) = cVar3 + (char)((uint)param_2 >> 3);
  return cVar3;
}


