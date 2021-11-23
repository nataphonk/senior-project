function createfigure(ts1, ymatrix1, ts2, getcolumn1, ts3, ymatrix2, ymatrix3)
%CREATEFIGURE(ts1, ymatrix1, ts2, getcolumn1, ts3, ymatrix2, ymatrix3)
%  TS1:  stairs x
%  YMATRIX1:  stairs matrix data
%  TS2:  stairs x
%  GETCOLUMN1:  stairs y
%  TS3:  stairs x
%  YMATRIX2:  stairs matrix data
%  YMATRIX3:  stairs matrix data

%  Auto-generated by MATLAB on 23-Nov-2021 15:14:34

% Create figure
figure1 = figure('WindowState','maximized');

% Create axes
axes1 = axes('Parent',figure1,...
    'Position',[0.05 0.548286604361371 0.434895833333333 0.401713395638629]);
hold(axes1,'on');
% axis padded
% Create multiple lines using matrix input to stairs
stairs1 = stairs(ts1,ymatrix1,'Parent',axes1,'LineWidth',2);
set(stairs1(1),'DisplayName','U','Color',[0.635 0.078 0.184]);
set(stairs1(2),'DisplayName','V','Color',[0.929 0.694 0.125]);
set(stairs1(3),'DisplayName','W','Color',[0.494 0.184 0.556]);

% Create ylabel
ylabel({'Commanded Phase Voltage (V)'});

% Create xlabel
xlabel('Time (s)');

% Uncomment the following line to preserve the X-limits of the axes
% xlim(axes1,[-0.001 0.051]);
% Uncomment the following line to preserve the Y-limits of the axes
ylim(axes1,[-6.60000000000026 6.60000000000024]);
box(axes1,'on');
hold(axes1,'off');
% Set the remaining axes properties
set(axes1,'TickDir','out','XGrid','on','YGrid','on');
% Create legend
legend1 = legend(axes1,'show');
set(legend1,...
    'Position',[0.438541663089292 0.844929040005342 0.0374999996740371 0.0893042550218192],...
    'Interpreter','none');

% Create axes
axes2 = axes('Parent',figure1,...
    'Position',[0.536979166666667 0.546209761163032 0.413020833333333 0.403790238836968]);
hold(axes2,'on');
% axis padded
% Create stairs
stairs(ts2,getcolumn1,'DisplayName','TAM Command Mode','Parent',axes2,...
    'LineWidth',2,...
    'Color',[0.718 0.275 1]);

% Create xlabel
xlabel('Time (s)');

% Uncomment the following line to preserve the X-limits of the axes
xlim(axes2,[0 0.05]);
% Uncomment the following line to preserve the Y-limits of the axes
ylim(axes2,[-0.15 3.15]);
box(axes2,'on');
hold(axes2,'off');
% Set the remaining axes properties
set(axes2,'TickDir','out','XGrid','on','YGrid','on','YTick',[1 2 3],...
    'YTickLabel',{'Upper','Lower','Both'});
% Create legend
legend2 = legend(axes2,'show');
set(legend2,...
    'Position',[0.805468754540197 0.639321564075524 0.136979163375993 0.0321910687386681],...
    'Interpreter','none');

% Create axes
axes3 = axes('Parent',figure1,...
    'Position',[0.05 0.0833437129504043 0.432291666666667 0.373561790684071]);
hold(axes3,'on');
% axis padded
% Create multiple lines using matrix input to stairs
stairs2 = stairs(ts3,ymatrix2,'Parent',axes3,'LineWidth',2);
set(stairs2(1),'DisplayName','U','Color',[0.494 0.184 0.556]);
set(stairs2(2),'DisplayName','V','Color',[0 0.447 0.741]);
set(stairs2(3),'DisplayName','W','Color',[0.85 0.325 0.098]);

% Create ylabel
ylabel({'Line Current (A)'});

% Create xlabel
xlabel('Time (s)');

% Uncomment the following line to preserve the X-limits of the axes
% xlim(axes3,[-0.001 0.051]);
% Uncomment the following line to preserve the Y-limits of the axes
% ylim(axes3,[-1.04658144272585 1.14988326096175]);
box(axes3,'on');
hold(axes3,'off');
% Set the remaining axes properties
set(axes3,'TickDir','out','XGrid','on','YGrid','on');
% Create legend
legend3 = legend(axes3,'show');
set(legend3,...
    'Position',[0.436458329755959 0.341294566622685 0.0374999996740371 0.0893042550218192],...
    'Interpreter','none');

% Create axes
axes4 = axes('Parent',figure1,...
    'Position',[0.534895833333333 0.0833437129504043 0.415104166666666 0.376677055481579]);
hold(axes4,'on');

% Create multiple lines using matrix input to stairs
stairs3 = stairs(ts1,ymatrix3,'Parent',axes4,'LineWidth',2);
set(stairs3(1),'DisplayName','U','Color',[0.929 0.694 0.125]);
set(stairs3(2),'DisplayName','V','Color',[0.635 0.078 0.184]);
set(stairs3(3),'DisplayName','W','Color',[0.074 0.624 1]);

% Create ylabel
ylabel({'TAM & FQT Output (V)'});

% Create xlabel
xlabel('Time (s)');

% Uncomment the following line to preserve the X-limits of the axes
xlim(axes4,[-0.001 0.051]);
% Uncomment the following line to preserve the Y-limits of the axes
ylim(axes4,[-6.6 6.6]);
box(axes4,'on');
hold(axes4,'off');
% Set the remaining axes properties
set(axes4,'TickDir','out','XGrid','on','YGrid','on');
% Create legend
legend4 = legend(axes4,'show');
set(legend4,...
    'Position',[0.906249996422625 0.351678780399945 0.0374999996740371 0.089304255021819],...
    'Interpreter','none');
% axis padded
