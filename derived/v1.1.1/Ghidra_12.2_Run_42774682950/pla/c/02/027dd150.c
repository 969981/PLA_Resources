/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027dd150; name: FUN_027dd150
 */


/* WARNING: Removing unreachable block (ram,0x027dd1f0) */

void FUN_027dd150(undefined8 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 local_38;
  
  uVar2 = FUN_02c5fb2c();
  bVar1 = false;
  local_38 = 0;
  uVar6 = 0;
LAB_027dd17c:
  if (!bVar1) goto LAB_027dd1c0;
LAB_027dd180:
  do {
    iVar3 = FUN_02c622ac(param_1,(long)&local_38 + 4,&local_38,0);
    while (iVar3 != 3) {
      if (iVar3 == 1) {
        if ((uVar6 & 1) != 0) {
          return;
        }
        uVar5 = FUN_02c61828(param_1,local_38 & 0xffffffff);
        uVar6 = 0;
        if ((uVar5 & 1) == 0) {
          return;
        }
        goto LAB_027dd17c;
      }
      if (iVar3 != 0) goto LAB_027dd17c;
      uVar4 = FUN_02c61828(param_1,local_38 & 0xffffffff);
      uVar6 = uVar6 | uVar4 ^ 1;
      if (bVar1) goto LAB_027dd180;
LAB_027dd1c0:
      iVar3 = FUN_02c61edc(param_1,uVar2,(long)&local_38 + 4,&local_38,0);
    }
    if (bVar1) {
      return;
    }
    local_38 = local_38 & 0xffffffff;
    bVar1 = true;
  } while( true );
}


