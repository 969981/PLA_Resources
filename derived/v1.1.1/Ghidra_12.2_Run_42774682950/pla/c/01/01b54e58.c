/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b54e58; name: FUN_01b54e58
 */


/* WARNING: Removing unreachable block (ram,0x01b54f9c) */

void FUN_01b54e58(long param_1,ulong param_2,char param_3)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  
  if (*(long *)(param_1 + 0x310) == 0) {
    return;
  }
  plVar4 = *(long **)(param_1 + 0x3c0);
  if (*(long **)(param_1 + 0x3c8) != plVar4) {
    do {
      lVar3 = *plVar4;
      if (*(char *)(lVar3 + 0x101) == '\0') {
        fVar5 = (float)FUN_01096640(*(undefined8 *)(lVar3 + 0xd8),*(undefined4 *)(param_1 + 0x480),
                                    *(undefined4 *)(param_1 + 0x484));
        if (1.1920929e-07 <= fVar5) goto LAB_01b54ee4;
LAB_01b54f18:
        plVar4 = (long *)FUN_01b570cc(param_1,plVar4);
      }
      else {
        lVar3 = *(long *)(lVar3 + 0x140);
        cVar2 = *(char *)(lVar3 + 0x4b) - param_3;
        *(char *)(lVar3 + 0x4b) = cVar2;
        if (cVar2 < '\x01') {
          *(undefined1 *)(lVar3 + 0x4b) = 0;
          goto LAB_01b54f18;
        }
LAB_01b54ee4:
        plVar4 = plVar4 + 1;
      }
    } while (*(long **)(param_1 + 0x3c8) != plVar4);
  }
  uVar1 = *(uint *)(param_1 + 0x308);
  if (uVar1 == 0) goto LAB_01b54e94;
  switch(*(undefined4 *)(param_1 + 0x480)) {
  case 0:
    uVar1 = uVar1 >> 3;
    break;
  case 1:
    break;
  case 2:
    uVar1 = uVar1 >> 1;
    goto joined_r0x01b54f60;
  case 3:
    uVar1 = uVar1 >> 2;
joined_r0x01b54f60:
    if ((uVar1 & 1) != 0) goto LAB_01b54e94;
  default:
    goto LAB_01b54f70;
  }
  if ((uVar1 & 1) == 0) {
LAB_01b54f70:
    if ((param_2 & 1) != 0) {
      return;
    }
  }
LAB_01b54e94:
  *(undefined1 *)(param_1 + 0x4a0) = 1;
  FUN_01b56418(param_1);
  return;
}


