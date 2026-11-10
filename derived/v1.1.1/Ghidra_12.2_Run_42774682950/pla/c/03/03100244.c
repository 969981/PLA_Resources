/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03100244; name: FUN_03100244
 */


void FUN_03100244(long *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  if (param_2 != param_3) {
    piVar3 = param_2;
    do {
      piVar2 = piVar3 + 1;
      lVar5 = param_1[3] + (long)*piVar3 * 0x28;
      *(undefined2 *)(lVar5 + 0x24) = 0;
      *(undefined1 *)(lVar5 + 0x14) = 0;
      *(undefined8 *)(lVar5 + 0x18) = 0xffffffff00ffffff;
      *(undefined1 *)(lVar5 + 0x26) = 0;
      piVar3 = piVar2;
    } while (param_3 != piVar2);
    piVar3 = param_2;
    do {
      piVar2 = piVar3 + 1;
      puVar7 = (undefined8 *)(param_1[5] + (long)*piVar3 * 0x150);
      *(undefined4 *)((long)puVar7 + 0x14) = 0xff7fffee;
      puVar7[1] = 0x7f7fffee7f7fffee;
      *puVar7 = 0x7f7fffee7f7fffee;
      *(undefined8 *)((long)puVar7 + 0xc) = 0xff7fffeeff7fffee;
      *(undefined1 *)(puVar7 + 3) = 0xff;
      piVar3 = piVar2;
    } while (param_3 != piVar2);
    if (*(char *)(*param_1 + 0x15de) != '\0') {
      uVar4 = (long)param_3 + (-4 - (long)param_2);
      uVar1 = ((uint)(uVar4 >> 2) & 0x3fffffff) + 1;
      uVar6 = (ulong)uVar1 & 3;
      piVar3 = param_2;
      if ((uVar1 & 3) != 0) {
        piVar2 = param_2;
        do {
          piVar3 = piVar2 + 1;
          uVar6 = uVar6 - 1;
          *(undefined1 *)(param_1[7] + (long)*piVar2) = 0;
          piVar2 = piVar3;
        } while (uVar6 != 0);
      }
      if (0xb < uVar4) {
        do {
          *(undefined1 *)(param_1[7] + (long)*piVar3) = 0;
          *(undefined1 *)(param_1[7] + (long)piVar3[1]) = 0;
          *(undefined1 *)(param_1[7] + (long)piVar3[2]) = 0;
          piVar2 = piVar3 + 3;
          piVar3 = piVar3 + 4;
          *(undefined1 *)(param_1[7] + (long)*piVar2) = 0;
        } while (piVar3 != param_3);
      }
      piVar3 = param_2;
      do {
        piVar2 = piVar3 + 1;
        lVar5 = param_1[0xb] + (long)*piVar3 * 0x28;
        *(undefined2 *)(lVar5 + 0x24) = 0;
        *(undefined1 *)(lVar5 + 0x14) = 0;
        *(undefined8 *)(lVar5 + 0x18) = 0xffffffff00ffffff;
        *(undefined1 *)(lVar5 + 0x26) = 0;
        piVar3 = piVar2;
      } while (param_3 != piVar2);
      do {
        piVar3 = param_2 + 1;
        puVar7 = (undefined8 *)(param_1[0xd] + (long)*param_2 * 0x150);
        *(undefined4 *)((long)puVar7 + 0x14) = 0xff7fffee;
        puVar7[1] = 0x7f7fffee7f7fffee;
        *puVar7 = 0x7f7fffee7f7fffee;
        *(undefined8 *)((long)puVar7 + 0xc) = 0xff7fffeeff7fffee;
        *(undefined1 *)(puVar7 + 3) = 0xff;
        param_2 = piVar3;
      } while (param_3 != piVar3);
    }
  }
  return;
}


