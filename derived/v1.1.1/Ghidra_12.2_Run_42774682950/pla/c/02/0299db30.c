/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0299db30; name: FUN_0299db30
 */


undefined8 FUN_0299db30(long param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  char *pcVar8;
  ulong uVar9;
  
  bVar2 = *(byte *)(param_1 + 0xd88);
  uVar4 = (ulong)bVar2;
  if (uVar4 == 0) {
    return 0;
  }
  uVar5 = 0;
  pcVar8 = (char *)(param_1 + 0x65);
  cVar3 = *pcVar8;
  while (((cVar3 != '\0' || (*(int *)(pcVar8 + -0x55) != 1)) ||
         (*(int *)(pcVar8 + -0x4d) != param_2))) {
    uVar5 = uVar5 + 1;
    pcVar8 = pcVar8 + 0x60;
    if (uVar4 == uVar5) {
      return 0;
    }
    cVar3 = *pcVar8;
  }
  do {
    lVar6 = param_1 + uVar5 * 0x60;
    *(uint *)(lVar6 + 0x60) = *(uint *)(lVar6 + 0x60) & 0xf1ffffff | 0x6000000;
    uVar7 = uVar4;
    uVar9 = uVar5;
    do {
      if (uVar9 == 0) goto LAB_0299dbb0;
      uVar9 = uVar9 - 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    uVar5 = uVar4;
LAB_0299dbb0:
    uVar1 = (int)uVar5 + 1;
    if ((uint)bVar2 <= (uVar1 & 0xff)) {
      return 1;
    }
    uVar5 = (ulong)uVar1 & 0xff;
    pcVar8 = (char *)(param_1 + 0x65 + uVar5 * 0x60);
    if (*pcVar8 == '\0') goto LAB_0299dbe4;
    do {
      do {
        uVar5 = uVar5 + 1;
        pcVar8 = pcVar8 + 0x60;
        if (uVar4 == uVar5) {
          return 1;
        }
      } while (*pcVar8 != '\0');
LAB_0299dbe4:
    } while ((*(int *)(pcVar8 + -0x55) != 1) || (*(int *)(pcVar8 + -0x4d) != param_2));
  } while( true );
}


