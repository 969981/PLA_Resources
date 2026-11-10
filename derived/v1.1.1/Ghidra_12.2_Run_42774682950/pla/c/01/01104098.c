/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01104098; name: FUN_01104098
 */


void FUN_01104098(long param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  plVar3 = (long *)(param_1 + 0xd28);
  lVar6 = *param_3;
  lVar4 = 1;
  lVar2 = 5;
  do {
    if (plVar3[-0x165] == *param_2) {
      if (plVar3[-0x156] == lVar6) {
        lVar4 = 0;
LAB_011042bc:
        uVar5 = param_4[2];
        uVar1 = param_4[1];
        *(undefined8 *)((long)plVar3 + lVar4 * 0x90 + -0xb04) = *param_4;
        *(undefined8 *)((long)plVar3 + lVar4 * 0x90 + -0xafc) = uVar1;
        *(undefined8 *)((long)plVar3 + lVar4 * 0x90 + -0xaf4) = uVar5;
        *(undefined1 *)(plVar3 + lVar4 * 0x12 + -0x155) = 1;
        return;
      }
      if (plVar3[-0x144] == lVar6) goto LAB_011042bc;
      if (plVar3[-0x132] == lVar6) {
        lVar4 = 2;
        goto LAB_011042bc;
      }
      if (plVar3[-0x120] == lVar6) {
        lVar4 = 3;
        goto LAB_011042bc;
      }
      if (plVar3[-0x10e] == lVar6) {
        lVar4 = 4;
        goto LAB_011042bc;
      }
      if (plVar3[-0xfc] == lVar6) {
        lVar4 = 5;
        goto LAB_011042bc;
      }
      if (plVar3[-0xea] == lVar6) {
        lVar4 = 6;
        goto LAB_011042bc;
      }
      if (plVar3[-0xd8] == lVar6) {
        lVar4 = 7;
        goto LAB_011042bc;
      }
      if (plVar3[-0xc6] == lVar6) {
        lVar4 = 8;
        goto LAB_011042bc;
      }
      if (plVar3[-0xb4] == lVar6) {
        lVar4 = 9;
        goto LAB_011042bc;
      }
      if (plVar3[-0xa2] == lVar6) {
        lVar4 = 10;
        goto LAB_011042bc;
      }
      if (plVar3[-0x90] == lVar6) {
        lVar4 = 0xb;
        goto LAB_011042bc;
      }
      if (plVar3[-0x7e] == lVar6) {
        lVar4 = 0xc;
        goto LAB_011042bc;
      }
      if (plVar3[-0x6c] == lVar6) {
        lVar4 = 0xd;
        goto LAB_011042bc;
      }
      if (plVar3[-0x5a] == lVar6) {
        lVar4 = 0xe;
        goto LAB_011042bc;
      }
      if (plVar3[-0x48] == lVar6) {
        lVar4 = 0xf;
        goto LAB_011042bc;
      }
      if (plVar3[-0x36] == lVar6) {
        lVar4 = 0x10;
        goto LAB_011042bc;
      }
      if (plVar3[-0x24] == lVar6) {
        lVar4 = 0x11;
        goto LAB_011042bc;
      }
      if (plVar3[-0x12] == lVar6) {
        lVar4 = 0x12;
        goto LAB_011042bc;
      }
      if (*plVar3 == lVar6) {
        lVar4 = 0x13;
        goto LAB_011042bc;
      }
    }
    plVar3 = plVar3 + 0x170;
    lVar2 = lVar2 + -1;
    if (lVar2 == 0) {
      return;
    }
  } while( true );
}


