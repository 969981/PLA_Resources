/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0041ff70; name: FUN_0041ff70
 */


ulong * FUN_0041ff70(long *param_1,ulong *param_2,int param_3)

{
  int iVar1;
  ulong *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong local_18;
  
  if ((*param_2 & 0x300) == 0) {
    return param_2;
  }
  uVar6 = param_2[4];
  if (*(long *)(*param_1 + *(long *)(uVar6 + 8)) == 0) {
    puVar2 = *(ulong **)(uVar6 + 0x30);
  }
  else {
    if (((uint)*param_2 >> 8 & 1) == 0) {
      local_18 = FUN_00420b50();
      pcVar4 = *(code **)(uVar6 + 0x10);
    }
    else {
      iVar1 = FUN_00407f40();
      local_18 = (ulong)iVar1;
      pcVar4 = *(code **)(uVar6 + 0x10);
    }
    if ((pcVar4 != (code *)0x0) && (iVar1 = (*pcVar4)(&local_18), iVar1 == 0)) {
      uVar3 = 0xe2;
      goto LAB_0041fffc;
    }
    if (0 < *(long *)(uVar6 + 0x20)) {
      lVar5 = 0;
      puVar2 = (ulong *)(*(long *)(uVar6 + 0x18) + 8);
      do {
        if (puVar2[-1] == local_18) {
          return puVar2;
        }
        lVar5 = lVar5 + 1;
        puVar2 = puVar2 + 6;
      } while (lVar5 < *(long *)(uVar6 + 0x20));
    }
    puVar2 = *(ulong **)(uVar6 + 0x28);
  }
  if (puVar2 != (ulong *)0x0) {
    return puVar2;
  }
  if (param_3 == 0) {
    return (ulong *)0x0;
  }
  uVar3 = 0xfb;
LAB_0041fffc:
  FUN_004014b0(0xd,0x6e,0xa4,"external/openssl/crypto/asn1/tasn_utl.c",uVar3);
  return (ulong *)0x0;
}


