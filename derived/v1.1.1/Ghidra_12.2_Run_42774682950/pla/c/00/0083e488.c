/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083e488; name: FUN_0083e488
 */


ulong * FUN_0083e488(long param_1,char *param_2,undefined8 param_3,char *param_4)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  ulong *puVar4;
  char cVar5;
  long lVar6;
  char cVar7;
  
  lVar6 = *(long *)(param_1 + 0x68);
  lVar1 = param_1 + 0x60;
  puVar4 = (ulong *)(param_2 + 2);
  if (lVar6 == lVar1) {
    cVar5 = '\0';
  }
  else {
    cVar5 = '\0';
    cVar7 = *(char *)(lVar6 + 0x31);
    while( true ) {
      if ((cVar7 == '\0') && (*(char *)(lVar6 + 0x30) != '\0')) {
        uVar3 = FUN_0082deb0(lVar6 + 0x10);
        uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
        cVar5 = cVar5 + '\x01';
        *puVar4 = uVar3 >> 0x20 | uVar3 << 0x20;
        lVar6 = *(long *)(lVar6 + 8);
        puVar4 = puVar4 + 1;
      }
      else {
        lVar6 = *(long *)(lVar6 + 8);
      }
      if (lVar6 == lVar1) break;
      cVar7 = *(char *)(lVar6 + 0x31);
    }
    lVar6 = *(long *)(param_1 + 0x68);
  }
  if (lVar6 == lVar1) {
    cVar7 = '\0';
  }
  else {
    cVar7 = '\0';
    cVar2 = *(char *)(lVar6 + 0x31);
    while( true ) {
      if ((cVar2 == '\0') && (*(char *)(lVar6 + 0x30) == '\0')) {
        uVar3 = FUN_0082deb0(lVar6 + 0x10);
        uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
        cVar7 = cVar7 + '\x01';
        *puVar4 = uVar3 >> 0x20 | uVar3 << 0x20;
        lVar6 = *(long *)(lVar6 + 8);
        puVar4 = puVar4 + 1;
      }
      else {
        lVar6 = *(long *)(lVar6 + 8);
      }
      if (lVar6 == lVar1) break;
      cVar2 = *(char *)(lVar6 + 0x31);
    }
  }
  *param_2 = cVar5;
  param_2[1] = cVar7;
  if ((param_4 != (char *)0x0) && (*param_4 = cVar7 + cVar5, (char)(cVar7 + cVar5) == '\0')) {
    *(undefined1 *)(param_1 + 0xf8) = 0;
  }
  return puVar4;
}


