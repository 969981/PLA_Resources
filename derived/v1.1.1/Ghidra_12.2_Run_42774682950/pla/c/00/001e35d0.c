/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e35d0; name: FUN_001e35d0
 */


undefined8 FUN_001e35d0(int param_1,byte *param_2,uint *param_3)

{
  bool bVar1;
  void *pvVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint __c;
  undefined4 local_64;
  
  if (param_1 == 2) {
    local_64 = local_64 & 0xffffff00;
    __c = (uint)*param_2;
    if (*param_2 != 0) {
      uVar7 = 0;
      bVar1 = false;
      iVar5 = 0;
      puVar6 = &local_64;
      do {
        param_2 = param_2 + 1;
        pvVar2 = memchr("0123456789",__c,0xb);
        if (pvVar2 == (void *)0x0) {
          if (iVar5 == 4) {
            return 0;
          }
          if (__c != 0x2e) {
            return 0;
          }
          if (!bVar1) {
            return 0;
          }
          uVar7 = 0;
          bVar1 = false;
          puVar6 = (undefined4 *)((long)puVar6 + 1);
          *(undefined1 *)puVar6 = 0;
        }
        else {
          if ((bool)((uVar7 & 0xff) == 0 & bVar1)) {
            return 0;
          }
          uVar7 = (int)pvVar2 + -0x39c7212 + (uVar7 & 0xff) * 10;
          if (0xff < uVar7) {
            return 0;
          }
          *(char *)puVar6 = (char)uVar7;
          if (!bVar1) {
            if (3 < iVar5) goto LAB_001e36c4;
            iVar5 = iVar5 + 1;
            bVar1 = true;
          }
        }
        __c = (uint)*param_2;
      } while (__c != 0);
      if (3 < iVar5) {
        *param_3 = local_64;
        return 1;
      }
    }
LAB_001e36c4:
    uVar3 = 0;
  }
  else {
    piVar4 = __errno_location();
    *piVar4 = 0x61;
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


